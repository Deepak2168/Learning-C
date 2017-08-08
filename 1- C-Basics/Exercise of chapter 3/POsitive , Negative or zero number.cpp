/*Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered. */

#include<stdio.h>
#include<conio.h>
int main()
{
	int num, sumPositive=0, sumNegative=0, sumZero=0;
	char choice;

	do
	{
		printf("Enter the number \n");
		scanf("%d",&num);

		if(num>0)
			sumPositive++;
		else if(num<0)
			sumNegative++;
		else
			sumZero++;

		printf("\nDo you want to Continue(yes/no) ?\n ");
		scanf("%ch", &choice);

	}
	while(choice=='Yes' || choice=='no');  // Choice is not working :(


	printf("Positive Number %d : ", sumPositive);
    printf("\nNegative Number %d : ", sumNegative);
    printf("\nZero Number %d", sumZero);

	return 0;
}




