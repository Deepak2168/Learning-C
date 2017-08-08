/*Write a program to find the octal equivalent of the entered number. */

#include<stdio.h>
#include<conio.h>
int main()
{
	int num,octalNum=1,foct=0,count;
    printf("\nEnter The Number :\n ");
    scanf("%d",&num);
    
	while(num>=8) 
     {
       count = num % 8;
       num = num / 8;
       octalNum=(octalNum*10)+count;
     }   
     
    octalNum=(octalNum*10)+num;  
    
	while(octalNum!=1)	
    {
      count = octalNum % 10;
      octalNum = octalNum / 10;
      foct = (foct*10) + count;
    }
    
	printf("\nOctal equivalent of  %d\n",foct);
}
