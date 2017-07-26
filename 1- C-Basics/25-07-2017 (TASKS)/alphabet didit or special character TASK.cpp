/*Write a C program to check whether a given character is alphabet, digit or special character using if else.
A character is alphabet if it in given range a-z or A-Z.
A character is digit if it is in range of 0-9.
A character is special symbol character if it neither an alphabet nor a digit.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	
	char ch;
	
	printf("Enter whatever you want to enter ..\n");
	scanf("%c", &ch);
	
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("\n%c is Alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("\n%c is Digit.", ch);
    }
    else
    {
        printf("\n%c is Special Character.", ch);
    }
 
    return 0;
	
}
