/*
Write a program that inputs one five-digit number, sep- arates the number into its individual digits and prints the digits separated from one another by three spaces each. [Hint: Use combinations of integer division and the remainder operation.] For exam- ple, if the user types in 42139, the program should print:

4   2   1  3  9 

*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,d1,d2,d3,d4,d5,num;
	
	printf("Enter any five didgit number\n");
	scanf("%d",&num);
	
	a=num/10;
	d5=num%10;
	b=a/10;
	d4=a%10;
	c=b/10;
	d3=b%10;
	d=c/10;
	d2=c%10;
	e=d/10;
	d1=d%10;
	
	printf("\n%d   %d   %d   %d   %d",d1,d2,d3,d4,d5);
	
	return 0;
}
//Checked and no comments!