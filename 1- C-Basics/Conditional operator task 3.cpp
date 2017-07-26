/*
 Write a program that reads in two integers 
 and determines and prints if the first is a 
 multiple of the second. 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2;
	printf("Enter any two numbers\n");
	scanf("%d%d",&num1,&num2);
	
	if(num1%num2==0)
	    
	    	printf("Number 1 is multiple of %d ",num2);
		
	if(num1%num2!=0)
	
		printf("\nNumber 1 is not multiple of %d ",num2);
		
	
	return 0;
}
//checked and no comments
