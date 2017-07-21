/*Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.*/


#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	
	printf("enter two numbers at location C and E\n");
	scanf("%d %d", &a,&b);
	
    c=a;
    a=b;
    b=c;
    
    printf("number at location of C after interchanbge is %d", a);
    printf("\nnumber at location of D after interchanbge is %d", b);
    
}
