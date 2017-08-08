/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters*/


#include<stdio.h>
#include<conio.h>
int main()
{
	int Distance, M , f, i, cm ; 
	//Be consistant in naming variable's names. 
	//As a convention, variable names should be in small.
	
	printf("enter the distance b/w two cities\n");
	scanf("%d", &Distance);
	
	printf(" \ndistance b/w two cities is %d in kilometers", Distance);
	
	M= Distance *1000;
	printf(" \ndistance b/w two cities is %d in meters", M);
	
	f= Distance*3280;
	printf(" \ndistance b/w two cities is %d in feets", f);
	
	i= Distance*39370;
	printf(" \ndistance b/w two cities is %d in inches", i);\
	
	cm=Distance*10000;
	printf(" \ndistance b/w two cities is %d in Centimeters", cm );
	
	

}
