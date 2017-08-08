#include <stdio.h>
int main( )
{
	int  diameter ;
	float pi=3.14159,area,circumference,radius ; //Why used double? Why not float?
	
	printf("enter radius of the circle \n"); //Try entering 3.2 as radius and check if your program gives right answer
	scanf("%f", &radius);
	

	
	area= pi*(radius*radius);
	printf("area of circle is %f" ,area );
	
	diameter= radius*2;
	printf("\ndiameter of circle is %d", diameter );
	
	circumference= pi*radius*2;
	printf("\ncicufernce of circle is %f", circumference);
	
	return 0;
}
