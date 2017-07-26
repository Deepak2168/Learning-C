/*Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition: 
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/


#include<stdio.h>
#include<conio.h>
int main()
{
	float TotalBill, Surcharges, TBAS;
	int units;
	
	printf("Enter consumed elctricity units.. : ");
	scanf("%d", &units);
	
	if(units <= 50)
    {
        TotalBill = units * 0.50;
    }
    else if(units <= 150)
    {
       TotalBill = 25 + ((units-50)*0.75);
    }
    else if(units <= 250)
    {
        TotalBill = 100 + ((units-150)*1.20);
    }
    else
    {
        TotalBill = 220 + ((units-250)*1.50);
    }
    
    Surcharges=TotalBill*0.20;
    TBAS=TotalBill+Surcharges;
    
    printf("\n\nYou have consumed electricy units : %d", units);
    printf("\nTotal Surchargs is : %.2f", Surcharges);
    printf("\nTotal Electrictiy Bill after adding surcharges is Rs : %.2f", TBAS);
    
    return 0;
 
	
}
