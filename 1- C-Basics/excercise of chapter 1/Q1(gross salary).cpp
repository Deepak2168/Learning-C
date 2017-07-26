/*Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int Salary;
	float RentAllowance, DearnessAllowance,GrossSalary;
	
	printf("Enter Ramesh's basic salary: ");
	scanf("%d", &Salary);
	
	RentAllowance= Salary*0.2;
	printf("\nRamesh Rent Allowance is %0.2f", RentAllowance);
	
	DearnessAllowance= Salary*0.4;
	printf("\nRamesh Dearness Allowance is %0.2f", DearnessAllowance);
	
	GrossSalary= (Salary+RentAllowance)+DearnessAllowance; //This formula is incorrect
	printf("\nRamesh  Gross salary is %0.2f", GrossSalary); 
	//Run program again and check the output carefully again.
	return 0;
}
