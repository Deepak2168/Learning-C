/*If the ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the
three.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int RamAge, ShyamAge, AjayAge;
	
	printf("Enter age of Ram, Shyam and Ajay\n");
	scanf("%d%d%d", &RamAge,&ShyamAge,&AjayAge);
	
	if(RamAge>ShyamAge)
	{
		if(ShyamAge>AjayAge)
		{
			printf("\nYoungest one Ajay and his age is %d :", AjayAge);
		}
		else
		   printf("\nyoungest one is Shyam and his age is %d :", ShyamAge);
	}
	else
	    printf("\nYoungest one is ram and his age is %d :", RamAge);
	    
	return 0;
}
