/*If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.
(Hint: Use the modulus operator ‘%’)*/


#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,d1,d2,d3,d4,d5,num, sum;
	
	printf("Enter any five digit number\n");
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
	
	sum= d1+d2+d3+d4+d5;
	
	printf("\nSum of digits in this number is : %d",sum);
}
//See you have already done one program that seperates the five digits,
//Just some those variables and you will get the sum of these digits.
