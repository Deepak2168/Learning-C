/*Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.*/


#include<stdio.h>
#include<conio.h>
int main()
{
	int C,D,temp;
	
	printf("enter two numbers at location C and E\n");
	scanf("%d %d", &C,&D);
	
    temp=C;
    C=D;
    D=temp;
    
    printf("number at location of C after interchanbge is %d", C );
    printf("\nnumber at location of D after interchanbge is %d", D);
    
}
//Kindly Use the same variables as asked in question, to clear up the things
//Use variables: C, D and temp
