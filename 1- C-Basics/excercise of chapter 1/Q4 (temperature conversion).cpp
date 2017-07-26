/*Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees*/

#include<stdio.h>
#include<conio.h>
int main()
{
	float f,c;
	
	printf("Enter temperature in fahrenheit: ");
	scanf("%f",&f);
	
	c=(f - 32) * 5/9;
	printf("\nTemperature in celcuis is: %f", c);
	return 0
}

//Checked and no comments
