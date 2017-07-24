/*The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.*/


#include<stdio.h>
#include<conio.h>
int main()
{
	int l,area1,b,perimeter2,perimeter1;
	float  area2, pi=3.14159;
	
	printf("enter length and breadth of rectangle and circle\n");
	scanf("%d %d", &l,&b);
	
	area1= l*b;
	printf("\narea of rectangle is %d", area1);
	
	area2= pi*l*b;
	printf("\narea of circle is is %f", area2);
	
	perimeter1= (2*l)*(2*b);
	printf("\nperimeter of circle is %d", perimeter1);
	
	perimeter2=  (2*l)+(2*b);
	printf("\nperimeter  of rectangle is is %d", perimeter2);

	
	
	
}
//Check again the parameter of circle
//Radius of circle is not input from user
//Input the length, breadth and radius in float

