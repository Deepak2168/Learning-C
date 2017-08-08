/*If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,d1,d2,d3,d4,d5,num;
	
	printf("enter any five digit number :");
	scanf("%d",&num);
	
	a=num/10;
	d5=(num%10)+1;
	b=a/10;
	d4=(a%10)+1;
	c=b/10;
	d3=(b%10)+1;
	d=c/10;
	d2=(c%10)+1;
	e=d/10;
	d1=(d%10)+1;
	
	
	printf("%d%d%d%d%d", d1,d2,d3,d4,d5);
	
}
//Try entering 99999 and the expected output should be 00000
//But your program doesn't give the right answers, all other cases are fine
