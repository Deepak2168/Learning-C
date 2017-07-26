/*
Write a program that reads in five integers 
and then determines and prints the largest 
and the smallest integers in the group. 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,num3,num4,num5,smallest , largest ;
	 printf("Enter any five numbers\n");
	 scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	smallest=num1;
	largest=num2;
	
	if(num1>largest)
	largest=num1;
	
	if(num2>largest)
	largest=num2;
	
	if(num3>largest)
	largest=num3;
	
	if(num4>largest)
	largest=num4;
	
	if(num5>largest)
	largest=num5;
	
	if(num1<smallest)
	smallest= num1;
	
	if(num2<smallest)
	smallest= num2;
	
	if(num3<smallest)
	smallest= num3;
	
	if(num4<smallest)
	smallest= num4;
	
	if(num5<smallest)
	smallest= num5;
	
	printf("The smallest number in group is %d : ", smallest);
	printf("\nThe largest number in group is %d :", largest);
	
	return 0;
}
