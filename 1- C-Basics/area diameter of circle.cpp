#include <stdio.h>
int main( )
{
	int radius, diameter ;
	double pi=3.14159,area,circumference ;
	
	printf("enter radius of the circle \n");
	scanf("%d", &radius);
	

	
	area= pi*radius*radius;
	printf("area of circle is %f" ,area );
	
	diameter= radius*2;
	printf("\ndiameter of circle is %d", diameter );
	
	circumference= pi*radius*2;
	printf("\ncicufernce of circle is %f", circumference);
	
	return 0;
}
