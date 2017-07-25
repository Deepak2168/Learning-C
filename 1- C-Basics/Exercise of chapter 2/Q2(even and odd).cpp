/*Any integer is input through the keyboard. Write a program to
find out whether it is an odd number or even number*/ 

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	
	printf("Enter any number :");
	scanf("%d", &num);
	
	if(num%2==0){
		printf("%d  is an even number", num);
	}
	else{
		printf(" \n%d is an odd number ",num);
		
	}
	return 0;
}
//Checked and no comments