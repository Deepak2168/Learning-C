/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters*/


#include<stdio.h>
#include<conio.h>
int main()
{
	int Distance, Meters, feet, inches, centimeters ;
	
	printf("enter the distance b/w two cities\n");
	scanf("%d", &Distance);
	
	printf(" \ndistance b/w two cities is %d in kilometers", Distance);
	
	Meters= Distance *1000;
	printf(" \ndistance b/w two cities is %d in meters", Meters);
	
	feet= Distance*3280;
	printf(" \ndistance b/w two cities is %d in feets", feet);
	
	inches= Distance*39370;
	printf(" \ndistance b/w two cities is %d in inches", inches);\
	
	centimeters=Distance*10000;
	printf(" \ndistance b/w two cities is %d in Centimeters", centimeters);
	
	

}
