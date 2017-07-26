/*Write a C program that inputs three sides of a triangle and checks whether a triangle is equilateral, scalene or isosceles triangle using if else.
A triangle is said Equilateral Triangle, if all its sides are equal.
A triangle is said Isosceles Triangle, if any of its two sides are equal.
A triangle is said Scalene Triangle, if none of its sides are equal.
Note: If a triangle is not valid, it cannot be of any of the above types.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int AB, AC, BC;
	
	printf("Enter three sides of triangle..!\n");
	scanf("%d %d %d", &AB, &AC, &BC);
	
	if(AB==AC && AC==BC)
	{
		printf("\nThis triangle is equivalent triangle..");
	}
	
	else if(AB==BC || AB==AC || BC==AC)
	{
		printf("\nThis triangle is Isosceles triangle..");
	}
	
	else
	{
		printf("\nNone of sides are equal so its scalen triangle..");
	}
	
	
	return 0;
}
