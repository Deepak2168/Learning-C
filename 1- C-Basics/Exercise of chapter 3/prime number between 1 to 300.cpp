/*Write a program to print all prime numbers from 1 to 300.
 (Hint: Use nested loops, break and continue) */

#include<stdio.h>
#include<conio.h>
int main()
{
	
    int num=1 , count ;
    for(;num<=300 ; num++)
    {
        for(count=2 ; count<300 ; count++)
        {
            if(count == num)
                continue;
            if(num % count == 0)
                break;
            if((num % count != 0) && count==299)
                printf(" %d ",num);
        }
    }
    return 0;
}
