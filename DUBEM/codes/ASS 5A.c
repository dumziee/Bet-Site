#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int  s;
	char n, g, A, B, Z,  OTHERS;
	
	printf("welcome to MONTEEK " );
	printf("\n pls input SALARY  "); 
	scanf("%d", &s);
	printf("pls input IN CAPSLOCK  your grade, A, B " ); 
scanf("%s", &g);
	
	if(g = 'A')
	{
		printf(" \n your basic salary is: %d", s+300);
	}
		
		else if(g = 'B')
		{
			printf("\n your basic salary is: %d", s+250);
			}
			else if (g = 'OTHERS');
			{
			
		printf("\n your basic salary is: %d", s+100);
		}
	


	return 0;
}
