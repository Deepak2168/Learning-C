/*Write a program to print all the ASCII values and their equivalent characters using a while loop. 
The ASCII values vary from 0 to 255*/

#include<stdio.h>
#include<conio.h>
int main()
{  
    int count=0, a;
     
   while(count<=255)
  {
     printf("%c \n", count);
     count=count+1;
  }
    
}	

