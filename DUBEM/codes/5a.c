#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int salary;
	char grade;
	
	printf("enter your salary: ");
	scanf("%d", salary);
	fflush(stdin);
	printf("enter your grade, A B OR OTHERS : ");
	grade =getchar();
	if (grade== 'A')
	{
		printf("your totalsalary; %d", salary+300);
		
	}
	else if (grade=='B')
	{
	printf("your totalsalary; %d", salary+250);
	}
	else
	{
			printf("your totalsalary; %d", salary+300);
	}


	return 0;
}
