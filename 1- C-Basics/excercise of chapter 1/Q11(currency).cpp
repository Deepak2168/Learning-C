/*A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int amount, Rs100, Rs50, Rs10 ;
	
	printf("enter withdrawn amount :");
	scanf("%d", &amount);
	
	Rs100= amount/100;
	printf("\nRequuire amount in Hundreds is : %d", Rs100);
	
	Rs50= (amount%100)/50;
	printf("\nRequuire amount in Fifties is : %d", Rs50);
	
	Rs10= (((amount%100)%50)/10);
	printf("\nRequuire amount in Tenth is : %d", Rs10);
	
	printf("\nAmount still remainig is : %d", (((amount%100)%50)%10));
}

//Good! Checked and no comments