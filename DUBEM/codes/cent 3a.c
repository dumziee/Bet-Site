#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{int s, m=3 , n=5 , r, t, y;
float x=3.0;
	t=n/m;
	printf("\n the solution to n/m is %d,",t);
	r=n%m;
	printf("\n the solution to n%m is %d,",r);
	t=x*n-m/2;
	printf("\n the solution to x*n-m/2 is %d,",t);
	s=(m+n)/x;
	printf("\n the solution to s=(m+n)/x is %d,",t);
	
	


	
	return 0;
}
