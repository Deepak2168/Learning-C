/*Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the
keyboard. A triangle is valid if the sum of all the three angles
is equal to 180 degrees.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	float A1,A2,A3;
	int sum;
	
	
	printf("Enter value of 1st, 2nd and 3rd angle\n");
	scanf("%f%f%f",&A1,&A2,&A3);
	
	sum=(A1+A2)+A3;
	
	if(sum==180)
      {
	    printf("\nThis triangle is valid and the sum of three angles is %d :" , sum);	
      }
     else
	 {
	 	printf("\nthis triangle is invalid");
	  } 
}
