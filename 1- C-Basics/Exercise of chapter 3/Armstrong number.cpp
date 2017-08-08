/*Write a program to print out all Armstrong numbers between 1 and 500. 
If sum of cubes of each digit of the number is equal to the number itself, 
then the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3) */

#include<conio.h>
#include<stdio.h>
int main()
{
    int num, count, d1, d2, d3;
    
    printf("all Armstrong numbers between 1 and 500\n\n");
    
 
    while (num <= 500)
    {
        d1 = num % 10;
        d2 = (num % 100) - ((num / 100) * 10);
        d3 = num % 1000;
 
        count = (d1*d1*d1) + (d2*d2*d2) + (d3*d3*d3);
 
        if (count == num)
        {
            printf("\nAmstrong Number:%d", count);
        }
 
        num++;
    }
    
    return 0;

}


// i dont know how to solve this problem 
