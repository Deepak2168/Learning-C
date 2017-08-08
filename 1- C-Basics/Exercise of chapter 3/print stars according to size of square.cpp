/*Write a program that reads in the side of a square and then prints that square out of asterisks. 
Your program should work for squares of all side sizes between 1 and 20. 
For example, if your program reads a size of 4, it should print:
****
****
****
***   */



#include<stdio.h>
#include<conio.h>
int main()
{
	int l, side, s;

  printf("size of square?\n");
  scanf("%d", &side );

  while (l < side)
	{
        s = 0;
        while (s < side) 
	{
        printf("*");
        s++;
    }
        printf("\n");
        l++;
  }

        return 0;
}
