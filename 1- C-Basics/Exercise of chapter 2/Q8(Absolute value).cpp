/*Find the absolute value of a number entered through the
keyboard.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int num, Absolute;
	printf("Enter any number : ");
	scanf("%d", &num);
	
	if(num<0)
	{
		Absolute = (-1) * num;
	}
	else
	{
		Absolute = num;
	}
	
	printf("\nThe absolute value of this number is  : %d" , Absolute);
	
	return 0;
}

//Try entering a number = 5
//The code will give the absolute answer as: -5
// But absolute value of 5 is 5
// Check again
