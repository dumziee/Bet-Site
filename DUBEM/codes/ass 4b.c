#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char a[50], b[50];
	printf("whats your first name - " );
	scanf("%s", &a);
	printf("\n\n whats your last name - " );
	scanf("%s", &b);
	printf("\n last name and first name \n  %s %s", b, a);
	return 0;
}
