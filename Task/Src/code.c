#include "code.h"

void printMessage()
{
	int res;
	int x=0;
	printf("please solve the following quiz:\n");
	printf("what is the solution for 3*(3+(10/2)\n");
	scanf("%d",&res);
	if ( 24 == res)
	{
		printf("correct result=%d",res);
	}
	else
	{
		printf("Wrong answer good luck next time");
	}
}