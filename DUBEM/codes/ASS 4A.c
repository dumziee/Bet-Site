#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int d, b, basic, salary;
	char n[60];
	float lod, bop;
	
	printf("whats your name:  ");
	scanf("%s", n);
	
	printf("whats your basic in figures:  ");
	scanf("%d", &b);
	
	printf("whats your daper in figures:  ");
	scanf("%d", &d);
	
	printf("whats your bonper in figures:  ");
	scanf("%f", &bop);
	
	printf("whats your loander in figures:  ");
	scanf("%f", &lod);
	
	
	salary=b+b*d/100+bop+b/100-lod;
		
	printf("Name");
	printf("\t\tBasic");
	printf("\t\tSalary");
	printf("\n");
	printf("%s", n);
	printf("\t\t%d", b);
	printf("\t\t%d", salary);


	return 0;
}

