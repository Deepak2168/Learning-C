/* Write a program to find the factorial value of any number entered through the keyboard. */

#include<stdio.h>
#include<conio.h>
int main()
{
	int num,fact,count;
    
	printf("Enter the number to find its Factorial \n");
    scanf ("%d",&num);

      count=num;
      fact=1;

     while(count>=1)
     {
        fact=fact*count;
	    count--;
     }
      
	  printf("The factorial of entered number is :%d", fact);

       return 0;

}


