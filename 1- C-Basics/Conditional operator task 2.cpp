/*
	Write a program that reads an integer 
	and determines and prints whether it 
	is odd or even. 
 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter any number \n");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("It is an Even number ");
		
	}
	else 
	{
		printf("\nIt is odd number number ");
	}
	
	return 0;
}
//Checked and no comments