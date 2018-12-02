/* Διαλεκτάκης Γιώργος 2014030178
   Ζερβάκης Άρης 2014030176

*/



%{
#include <stdarg.h>
#include <stdio.h>
#include "cgen.h"

extern int yylex(void);
extern int line_num;
%}


%union
{
	char* crepr;
}

								/*  	TERMINALS		*/
%token <crepr> IDENT
%token <crepr> POSINT
%token <crepr> KW_INT
%token <crepr> REAL
%token <crepr> STRING

%token KW_PROGRAM
%token KW_BEGIN
%token KW_END
%token KW_AND
%token KW_DIV
%token KW_FUNC
%token KW_MOD
%token KW_PROC
%token KW_RESULT
%token KW_ARRAY
%token KW_DO
%token KW_GOTO
%token KW_NOT
%token KW_RETURN
%token KW_BOOLEAN
%token KW_ELSE
%token KW_IF
%token KW_OF
%token KW_THEN
%token KW_CHAR
%token KW_FOR
%token KW_OR
%token KW_REPEAT
%token KW_UNTIL
%token KW_VAR
%token KW_WHILE
%token KW_TO
%token KW_DOWNTO
%token OP_ASS
%token KW_TYPE
%token KW_REAL
%token KW_TRUE
%token KW_FALSE



%start program


									/*		NON TERMINALS		*/
%type <crepr> program_decl
%type <crepr> body
%type <crepr> statements
%type <crepr> statement_list
%type <crepr> statement
%type <crepr> proc_call
%type <crepr> empty
%type <crepr> data_type
%type <crepr> basic_data_type
%type <crepr> data_type_without_ident
%type <crepr> array_dimension
%type <crepr> function_type
%type <crepr> variable_decl_optional
%type <crepr> variable_declaration
%type <crepr> variable_decl
%type <crepr> variable_decl_list
%type <crepr> identifier_list
%type <crepr> parameters_list
%type <crepr> param_list
%type <crepr> parameters_decl
%type <crepr> instruction
%type <crepr> if_statement
%type <crepr> for_statement
%type <crepr> while_statement
%type <crepr> flow_control_body
%type <crepr> type_def_optional
%type <crepr> type_def
%type <crepr> typedef_statement
%type <crepr> typedef_list
%type <crepr> subprograms_decl_list
%type <crepr> subprograms_decl
%type <crepr> arguments_optional
%type <crepr> arguments_list
%type <crepr> expression
%type <crepr> expression_cast
%type <crepr> expression_factor
%type <crepr> expression_logical_and
%type <crepr> expression_logical_or
%type <crepr> expression_not
%type <crepr> expression_relational
%type <crepr> expression_sign
%type <crepr> expression_term
%type <crepr> main_expression
%type <crepr> array_assign
%type <crepr> expression_with_array
%type <crepr> command



							/*		ASSOCIATIVITY		*/
%left KW_OR OP_OR
%left KW_AND OP_AND
%left '=' '>' '<' OP_GRE OP_LESE OP_NE
%left '+' '-'
%left '*' KW_DIV KW_MOD '/'


%nonassoc USIGN
%nonassoc UNOT

%right KW_THEN KW_ELSE




%%                     			 /*			GRAMMAR RULES 		 */


empty:  {$$ = "";};


program:  program_decl type_def_optional variable_decl_optional subprograms_decl_list body '.'

{
	/* We have a successful parse!
		Check for any errors and generate output.
	*/
	if(yyerror_count==0) {
		printf("/* program  %s */\n", $1);
		puts(c_prologue);
		printf("%s", $2);
	    printf("%s", $3);
		printf("%s", $4);
		printf("\n\nint main() %s ", $5);
	}
};




								/*    		PROGRAM DECLARATION              */


program_decl: KW_PROGRAM IDENT ';'  	{$$ = $2;};

body: KW_BEGIN statements KW_END   	{ $$ = template("{\n%s\treturn 0;\n}\n", $2); };




								/*			TYPEDEF				*/


type_def_optional:	empty
					|	type_def ;


type_def:   KW_TYPE typedef_list   {$$ = template("%s", $2);};


typedef_list:  typedef_statement
	           | typedef_list typedef_statement {$$ = template("%s%s", $1, $2);} ;


typedef_statement:  IDENT '=' data_type ';'  {$$ = template("typedef %s %s;\n", $3, $1);};





									/*        STATEMENETS       */


statements: empty
			|  statement_list ;


statement_list: statement
			  	| statement_list ';' statement  { $$ = template("%s%s", $1, $3); };


statement: 	proc_call  { $$ = template("\t%s;\n", $1); }
			| instruction;


instruction:				IDENT OP_ASS expression command								{$$ = template("\t%s = %s;\n%s", $1, $3, $4);}
							| array_assign OP_ASS expression command 					{$$ = template("\t%s = %s;\n%s", $1, $3, $4);}
							| KW_RESULT OP_ASS expression 								{$$ = template("\tresult = %s;\n",$3);}
							| if_statement												{$$ = template("%s", $1);}
							| for_statement												{$$ = template("%s", $1);}
							| while_statement											{$$ = template("%s", $1);}
							| IDENT ':' instruction										{$$ = template("\t%s:%s\n", $1, $3);}
							| KW_GOTO IDENT												{$$ = template("\tgoto %s\n", $2);}
							| KW_RETURN													{$$ = template("\treturn result;\n"); };



command: empty
		 		| instruction;


array_assign: IDENT expression_with_array 					{$$ = template("%s%s", $1, $2);};


expression_with_array: '[' expression_term ']' 				 {$$ = template("[%s]", $2);}
			 | expression_with_array '[' expression_term ']' {$$ = template("%s[%s]", $1, $3);};


if_statement:		KW_IF expression KW_THEN flow_control_body								   {$$ = template("\tif(%s)\n\t%s\t\n", $2, $4);}
				    |	KW_IF expression KW_THEN flow_control_body KW_ELSE flow_control_body   {$$ = template("\tif(%s)\n%s\telse\n%s\t\n", $2, $4, $6);} ;



for_statement:	 KW_FOR IDENT OP_ASS expression KW_TO expression KW_DO flow_control_body		{$$ = template("\tfor(%s=%s; %s<=%s; %s++)\n%s\t\n", $2, $4, $2, $6, $2, $8);}
				 | KW_FOR IDENT OP_ASS expression KW_DOWNTO expression KW_DO flow_control_body  {$$ = template("\tfor(%s=%s; %s>=%s; %s--)\n%s\t\n", $2, $4, $2, $6, $2, $8);};



while_statement:		KW_WHILE expression KW_DO flow_control_body			{$$ = template("\twhile(%s)\n%s\t\n", $2, $4);}
						| KW_REPEAT flow_control_body KW_UNTIL expression	{$$ = template("\tdo\n%s\n\twhile(%s)\n", $2, $4);};



flow_control_body:	statement
					| KW_BEGIN statements KW_END  {$$ = template("\t{\n%s\t}\n", $2);};




									/*          DATA TYPES          */


data_type:	data_type_without_ident
			| IDENT;


data_type_without_ident:  basic_data_type
		   				  |  KW_ARRAY KW_OF basic_data_type  			   		{ $$ = template("%s*", $3); }
		   			      |  KW_ARRAY array_dimension KW_OF basic_data_type 	{ $$ = template("typeof(%s %s)", $4, $2); }
		   			      |  function_type;


basic_data_type:  KW_INT 			{$$ = "int";}
				  | KW_BOOLEAN		{$$ = "int";}
				  | KW_REAL			{$$ = "double";}
				  | KW_CHAR			{$$ = "char";};


array_dimension:	'[' POSINT ']'					   {$$ = template("[%s]", $2);}
 					|	array_dimension '[' POSINT ']' {$$ = template("%s[%s]", $1, $3);};



function_type:	KW_FUNC '(' param_list ')' ':' data_type {$$ = template("%s(*)(%s)", $6, $3);};


param_list:	empty
			| identifier_list ':' data_type 	 			{$$ = template("%s %s", $3, $1);}	
    		| param_list ';' identifier_list ':' data_type 	{$$ = template("%s, %s %s", $1, $5, $3);};	


identifier_list:	IDENT
					| identifier_list ',' IDENT {$$ = template("%s, %s", $1, $3);};




							/*			VARIABLES DECLARATION		*/


variable_decl_optional:	 empty | variable_decl;


variable_decl:  KW_VAR variable_decl_list 		{$$ = template("%s", $2);};


variable_decl_list:	 variable_declaration
					 |  variable_decl_list variable_declaration   {$$ = template("%s%s", $1, $2);};


variable_declaration:  identifier_list ':' data_type ';'		  {$$ = template("%s %s;\n", $3, $1);};





 						/*				EXPRESSIONS              */

expression:	 expression_logical_or ;


expression_logical_or:	expression_logical_and
						|  expression_logical_or KW_OR expression_logical_and   {$$ = template("%s || %s", $1, $3);}
						|  expression_logical_or OP_OR expression_logical_and   {$$ = template("%s || %s", $1, $3);};


expression_logical_and:	expression_relational
						| expression_logical_and KW_AND expression_relational   {$$ = template("%s && %s", $1, $3);}
						| expression_logical_and OP_AND expression_relational   {$$ = template("%s && %s", $1, $3);};


expression_relational:  expression_term
						| expression_relational '='     expression_term		{$$ = template("%s == %s", $1, $3);}
						| expression_relational OP_NE   expression_term		{$$ = template("%s != %s", $1, $3);}
						| expression_relational '<'     expression_term		{$$ = template("%s < %s", $1, $3);}
						| expression_relational '>'     expression_term		{$$ = template("%s > %s", $1, $3);}
						| expression_relational OP_LESE expression_term		{$$ = template("%s <= %s", $1, $3);}
						| expression_relational OP_GRE  expression_term 	{$$ = template("%s >= %s", $1, $3);};

expression_term:  expression_factor
				 |	expression_term '+' expression_factor   {$$ = template("%s + %s", $1, $3);}
				 |  expression_term '-' expression_factor   {$$ = template("%s - %s", $1, $3);};


expression_factor:  expression_cast
					| expression_factor '*'    expression_cast 	 {$$ = template("%s * %s", $1, $3);}
					| expression_factor '/'    expression_cast   {$$ = template("%s / %s", $1, $3);}
					| expression_factor KW_DIV expression_cast	 {$$ = template("%s / %s", $1, $3);}
					| expression_factor KW_MOD expression_cast   {$$ = template("%s %% %s", $1, $3);};


expression_cast:  expression_sign
				  |	 '(' data_type_without_ident ')' expression_sign   {$$ = template("(%s) %s", $2, $4);};


expression_sign:  expression_not
				  | '+' expression_not %prec USIGN	 {$$ = template("+%s", $2);}
				  | '-' expression_not %prec USIGN   {$$ = template("-%s", $2);};


expression_not:  main_expression
				 | '!' 	  main_expression  %prec UNOT		{$$ = template("!%s", $2);}
				 | KW_NOT main_expression  %prec UNOT   {$$ = template("!%s", $2);};


main_expression:  POSINT
				  | REAL
				  | STRING												{$$ = string_ptuc2c($1);}
				  | IDENT
				  | main_expression '[' expression ']'					{$$ = template("%s[%s]", $1, $3);}
				  | '(' expression ')'									{$$ = template("(%s)", $2);}
				  | proc_call
				  | KW_TRUE												{ $$ = "1"; }
				  | KW_FALSE											{ $$ = "0"; };






						/*						  SUBPROGRAMS     		              	*/



subprograms_decl_list:  empty
						| subprograms_decl_list subprograms_decl {$$ = template("%s%s", $1, $2);};



subprograms_decl: 	KW_FUNC IDENT '(' parameters_list ')' ':' data_type ';' type_def_optional variable_decl_optional subprograms_decl_list KW_BEGIN statements KW_END ';'
					{$$ = template("%s %s(%s){\n%s\t%s result;\n%s%s%s}\n", $7, $2, $4, $9, $7, $10, $11, $13);}
					|  KW_PROC IDENT '(' parameters_list ')' ';' type_def_optional variable_decl_optional subprograms_decl_list KW_BEGIN statements KW_END ';'
					{$$ = template("void %s(%s){\n%s%s%s%s}\n", $2, $4, $7, $8, $9, $11);};



parameters_list: 	empty
					| parameters_decl
					| parameters_list ';' parameters_decl  {$$ = template("%s, %s", $1, $3);};



parameters_decl:   identifier_list ':' data_type {$$ = template("%s %s", $3, $1);};




									/* 			SUBPROGRAMS CALL     */


proc_call:  IDENT '(' arguments_optional ')' 	{ $$ = template("%s(%s)", $1, $3); };


arguments_optional:	 empty
	 	    		 | arguments_list 	{ $$ = $1; };


arguments_list:  expression							{ $$ = $1; }
       			 | arguments_list ',' expression 	{ $$ = template("%s,%s", $1, $3);}
				 | KW_RESULT 						{ $$ = "result"; };





%% 				/* 		USER CODE		*/

/*
int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}

*/