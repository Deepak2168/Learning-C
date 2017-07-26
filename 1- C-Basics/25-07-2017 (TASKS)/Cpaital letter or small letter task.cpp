#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	
	printf("Enter letter which you want to check that its capital or small\n");
	scanf("%c",&ch);
	
	if(ch >= 65 && ch <=91)
	{
		printf("\nThis is capital letter..!");
	}
	else 
	{
		printf("\nThis is small letter..!");
	}
	
	return 0;
	
	
}
