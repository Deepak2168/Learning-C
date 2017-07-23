/*Find the absolute value of a number entered through the
keyboard.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int num, Absolute;
	printf("Enter any number : ");
	scanf("%d", &num);
	
	Absolute=num*(-1);
	
	printf("\nThe absolute value of that number is %d :" , Absolute);
	
	return 0;
}
