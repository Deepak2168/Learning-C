/*If cost price and selling price of an item is input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit
he made or loss he incurred.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int CP, SP, P;
	
	printf("Enter the Cost price and selling price of an item\n");
	scanf("%d%d", &CP,&SP);
	
    P=SP-CP;
    
    if(P>0)
    {
    	printf("You have profit on this item is RS: %d", P);
    	
	}
	if(P<0)
	{
		printf("\nCongrats! you have loss on this item is Rs: %d", P);
	}
	return 0;
}
