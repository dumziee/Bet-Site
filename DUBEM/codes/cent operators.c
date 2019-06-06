#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
int a=10, b=8, c=6, d=5 , e=2 , iresult;

	iresult=a-b-c-d;
	printf(" \n answer of a-b-c-d is %d", iresult);

	
	iresult=a-b+c-d;
	printf("\n The answer of a-b+c-d is %d", iresult);
	
	iresult=a+b/c/d;
	printf("\n The answer of a+b/c/d is %d", iresult);
	

	
	iresult=a%b/c*d;
	printf("\n The answer of a%b/c*d is %d", iresult);
	
	iresult=(a+b)*c+d*e;
	printf("\n The answer of (a+b)*c+d*e is %d", iresult);

	
	iresult=(a+b)*(c/d)%e;
	printf("\n The answer of (a+b)*(c/d)%e is %d", iresult);
	
	return 0;
}
