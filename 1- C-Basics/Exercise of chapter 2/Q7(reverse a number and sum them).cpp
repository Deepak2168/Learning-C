/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not.*/


#include<stdio.h>
#include<conio.h>
int main()
{
	int num,a,b,c,d,e,d1,d2,d3,d4,d5,sum1,sum2;
	
	printf("Enter any five digits number : ");
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
	
	printf("\nThe Reverse number is %d%d%d%d%d", d5,d4,d3,d2,d1);
	
	sum1=d1+d2+d3+d4+d5;
	sum2=d5+d4+d3+d2+d1;
	
	if(sum1==sum2){
		printf("\nOriginal & reverse number is equal in sum and the sum is %d : ", sum1);
	}
}
