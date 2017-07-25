/*If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item.*/


#include<stdio.h>
#include<conio.h>
int main()
{
	float SellingPrice, CostPrice, profit;
	
	printf("Enter total selling price and profit \n");
	scanf("%f %f", &SellingPrice,&profit);
	
	CostPrice=SellingPrice-profit;
	
	printf("Cost price of one item is Rs: %0.2f", (CostPrice/15));
}
//Checked and no comments