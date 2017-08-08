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
	
<<<<<<< HEAD
	rentAllowance= salary*0.2;
	printf("\nramesh rent Allowance is %.2f", rentAllowance);
	
	dearnessAllowance= salary*0.4;
	printf("\nramesh dearness Allowance is %.2f", dearnessAllowance);
	
	grossSalary= salary + rentAllowance + dearnessAllowance; //This formula is incorrect
	printf("\nramesh  gross salary is %.2f", grossSalary); 
=======
	RentAllowance= Salary*0.2;
	printf("\nRamesh Rent Allowance is %0.2f", RentAllowance);
	
	DearnessAllowance= Salary*0.4;
	printf("\nRamesh Dearness Allowance is %0.2f", DearnessAllowance);
	
	GrossSalary= (Salary+RentAllowance)+DearnessAllowance; //This formula is incorrect
	printf("\nRamesh  Gross salary is %0.2f", GrossSalary); 
>>>>>>> 6b0a8d65376cfdaaa7789b8f8e3b360ead417d92
	//Run program again and check the output carefully again.
	return 0;
}
