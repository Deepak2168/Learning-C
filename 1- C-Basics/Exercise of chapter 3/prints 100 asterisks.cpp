/*Write a program that prints 100 asterisks, one at a time. 
After every tenth asterisk, your program should print a newline character.*/

#include <stdio.h>
#include<conio.h>

int main()
{
int count;
count =100;

while ( --count >= 0 )
{
printf ("*");
if ( count % 10 )
printf ("\n");

}

return 0;
}

