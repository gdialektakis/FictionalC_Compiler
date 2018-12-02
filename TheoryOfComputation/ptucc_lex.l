%{
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "ptucc_parser.tab.h"
#include "cgen.h"

int line_num = 1;

/*
	A primitive macro facility:
	just one macro is allowed to be defined!
*/
#define MAXMACRO 32
char* mactable[MAXMACRO][2];
int mactable_size = 0;

/* Return 1 on success, 0 on failure (macro table full) */
int set_macro(char* name, char* def);

/* Return def for macro, or NULL if no such macro is defined. */
char* get_macro(char* name);

%}

ID      [a-zA-Z_][0-9a-zA-Z_]*
DIGIT   [0-9]
NUMBER  {DIGIT}{DIGIT}*
DECIMAL ("."{NUMBER})|({NUMBER}("."{NUMBER}?)?)
REAL    {DECIMAL}([eE][+-]?{NUMBER})?
STRING  ([\']([^\n'"\\]|([\\][n]|[\\][t]|[\\][r]|[\\][\\]|[\\][']|[\\]["]))*[\'])|([\"]([^\n'"\\]|([\\][n]|[\\][t]|[\\][r]|[\\][\\]|[\\][']|[\\]["]))*[\"])

%x comment
%x linecomment
%x macro


%%

@defmacro[ \r\t]+       BEGIN(macro);
<macro>{ID} {
	/* Store macro name */
	char* name = strdup(yytext);
	char* def = NULL;
	size_t deflen = 0;
	char c;

	FILE* deff = open_memstream(&def, &deflen);

	while((c=input())!='\n'){
		fputc(c, deff);
	}
	fclose(deff);
	// printf("name: %s, def: %s, c: %d\n", name, def, c);

	if(!set_macro(name, def))
		yyerror("lexer error: failed to define macro '%s'\n", name);
	BEGIN(INITIAL);
};



"program"		  {return (KW_PROGRAM);}
"begin" 		  {return (KW_BEGIN);}
"end"			  {return (KW_END);}
"return"          {return (KW_RETURN);}
"if"              {return (KW_IF);}
"else"		      {return (KW_ELSE);}
"then"            {return (KW_THEN);}
"for"             {return (KW_FOR);}
"repeat"          {return (KW_REPEAT);}
"until"           {return (KW_UNTIL);}
"while"           {return (KW_WHILE);}
"to"              {return (KW_TO);}
"downto"          {return (KW_DOWNTO);}
"var"             {return (KW_VAR);}
"of"              {return (KW_OF);}
"do"              {return (KW_DO);}
"goto"            {return (KW_GOTO);}
"char"            {return (KW_CHAR);}
"procedure"       {return (KW_PROC);}
"function"        {return (KW_FUNC);}
"div"			  {return (KW_DIV);}
"mod"			  {return (KW_MOD);}
"and"			  {return (KW_AND);}
"or"			  {return (KW_OR);}
"real" 			  {return (KW_REAL);}
"type" 			  {return (KW_TYPE);}
"array" 		  {return (KW_ARRAY);}	
"result"          {return (KW_RESULT);}
"not"             {return (KW_NOT);}
"boolean"         {return (KW_BOOLEAN);}
"integer"		  {return (KW_INT);}
"true"			  {return (KW_TRUE);}
"false"			  {return (KW_FALSE);}



{ID}  					{
						   char* def = get_macro(yytext);
						   if(def==NULL) { yylval.crepr = strdup(yytext);
						   		return IDENT;
						   	}
						   for(int i=strlen(def); i>0; i--) {
						   	  unput(def[i-1]);
						   }
						}

{NUMBER}				{   yylval.crepr = strdup(yytext); 						
						    return POSINT; }						

{REAL}					{yylval.crepr = strdup(yytext); return (REAL);}
{STRING}				{yylval.crepr = strdup(yytext); return (STRING);}


"+"         	{return ('+');}
"-"         	{return ('-');}
"*"         	{return ('*');}
"/"         	{return ('/');}
"("				{return ('(');}
")"				{return (')');}
"["        	 	{return ('[');}
"]"         	{return (']');}
"."				{return ('.');}
","			    {return (',');}
";"         	{return (';');}
":"        	 	{return (':');}
"="         	{return ('=');}
"<>"        	{return (OP_NE);}
"<"         	{return ('<');}
">"         	{return ('>');}
"<="       	 	{return (OP_LESE);}
">="        	{return (OP_GRE);}
":="        	{return (OP_ASS);}
"||"		   	{return (OP_OR);}
"&&"		  	{return (OP_AND);}
"!"			   	{return ('!');}



"(*"					{BEGIN(comment);}                           /*	Multiline comments  */
<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*)\n]*   /* eat up '*'s not followed by ')'s */
<comment>\n             ++line_num;
<comment>"*"+")"        BEGIN(INITIAL);


"//"					{BEGIN(linecomment);}                     /*	Line comments  */
<linecomment>[^\n]
<linecomment>\n         {++line_num; BEGIN(INITIAL);}


[ \r\t]					/* skip whitespace */
\n 						++line_num;

<<EOF>> 				{return EOF; yyterminate();}

.        				{yyerror("lexical error: unrecognized literal '%s'\n", yytext); }


%%

int set_macro(char* name, char* def)
{
	/* Check to see if macro already defined, and redefine it. */
	int i;
	for(i=0; i<mactable_size; i++) {
		if(strcmp(mactable[i][0], name)==0) {
			/* found ! */
			free(name);
			free(mactable[i][1]);
			mactable[i][1] = def;
			break;
		}
	}
	if(i<mactable_size)
		return 1;
	else if(mactable_size < MAXMACRO) {
		/* new entry */
		assert(i==mactable_size);
		mactable[i][0] = name;
		mactable[i][1] = def;
		mactable_size++;
		return 1;
	}
	else
		return 0;
}

char* get_macro(char* name)
{
	for(int i=0;i<mactable_size; i++) {
		if(strcmp(mactable[i][0], name)==0)
			return mactable[i][1];
	}
	return NULL;
}
