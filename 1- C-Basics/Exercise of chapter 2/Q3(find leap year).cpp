/*Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	
	printf("Enter year you want to check : ");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				printf("\nThis %d is Leap year ", year);
			}
			else
				printf("\n%d is not Leap year ", year);
			
		}
		
		else
			printf("This %d is Leap year ", year);
	}
	 else
				printf("\n%d is not Leap year ", year);

     return 0;
  }

  //Check and no comments!
