#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int  salary= 300 ,  T=300, Y=250, others=100;
	char n[100], g[100], A, B, Z;
	printf("welcome to aptech " );
	printf("\n pls input name  "); 
	scanf("%s", &n);
	printf("pls input IN CAPSLOCK grade, A, B OR OTHERS " ); 
	scanf("%s",&g);
	
	if(g == A)
	{
		printf(" \n your basic salary is: %d", T+salary);
	}
		
		else if(g == B)
		{
			printf("\n your basic salary is: %d", Y+salary);
			}
			else if (g == OTHERS);
			{
			
		printf("\n your basic salary is: %d", others+salary);
		}
	


	return 0;
}
