#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
# define pi 3.14f
int main(int argc, char *argv[]) 
{
	float radius, area, per; 
	printf("enter radius of circle: ");
	scanf("%f", &radius);
	area=pi*radius*radius;
	per=2*pi*radius;
	
	printf("\n area of given circle: %f ", area);
	printf("\n perimeter of given cicle: %f", per);

return 0;

}
