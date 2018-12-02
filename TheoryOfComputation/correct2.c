/* program  foo */
#include "ptuclib.h"


int i, j, n;
double k;
int myboolean;
typeof(int [10]) array1d;
typeof(int [10][5]) array2d;
typeof(int [3][7][4]) array3d;
char* array4d;


int main() {
	for(i=0; i<=10; i++)
	{
	array1d[i] = 0;
	for(j=0; j<=7; j++)
	{
	array2d[i][j] = 0;
	for(n=0; n<=4; n++)
	array3d[i][j][n] = 0;
	
	}
	
	}
	
	n = 1;
	k = 2;
	array1d[1] = 4;
	array1d[2] = 20 / array1d[0];
	array2d[1][2] = (18 + 5 - array1d[1]) / 2;
	array3d[1 + n][1][2] = (int) (k + 9);
	myboolean = 0;
	j = 8;
	n = -3;
	while((j == 5 || n < 0 && k > 0))
	{
	if((k / 2 == 0))
	printf("k is an even");
	else
	if(!myboolean)
	{
	goto label
	}
	else
	if(array2d[3][1] < 10)
	{
	array2d[3][1] = myarray2[2][2] + myarray2[2][0];
	myarray4 = (char) n;
	}
	else
	{
	writeString("Bye bye cruel world forever");
	writeInteger(n);
	writeReal(k);
	}
	
	
	
	}
	
	if(j % 2 > 0 || k < 15)
		i = 15;
	if(n < 0)
		printf("i have only if statements");
	
	
	label:	myboolean = 1;

	writeString("The end");
	return 0;
}
 /*Accepted!
*/