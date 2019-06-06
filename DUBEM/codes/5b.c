#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
int main(int argc, char *argv[]) 
{
    int num;
    printf("input grade  " );
    scanf("%d", &num);
      if(num >=75)
	  {
    printf("congratulations  A");	
	}

    else if(num >=60, num>=46)
	{
    printf("very good B");
	}
    
    else if(num >=45, num>=36)
	{
    printf("good C");
	}

    else if(num >=35)
	{
    printf("poor D");
  	}
   
    else if(num <35)
	{
    printf("work hard");
	}


	return 0;
}
