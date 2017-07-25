/*Given the length and breadth of a rectangle, write a program to
find whether the area of the rectangle is greater than its
perimeter. For example, the area of the rectangle with length = 5
and breadth = 4 is greater than its perimeter.*/


#include<stdio.h>
#include<conio.h>
int main()
{
	int l, b, P, A;
	
	
	printf("Enter length and breadth of rectangle\n");
	scanf("%d%d", &l, &b);
	
	A=l*b;
	P=(2*l)+(2*b);
	
	if(A>P)
	{
		printf("Area of rectangle is greater than perimeter and area of rectangle is %d : ", A);
		
	}
	else
	{
		printf("Are of rectangle is smaller than perimter and perimeter of this rectangle is %d :", P);
	}
	return 0;
}
//Checked and no comments
