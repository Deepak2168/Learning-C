/*Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int salary;
	float rentAllowance, dearnessAllowance,grossSalary;
	
	printf("Enter Ramesh's basic salary: ");
	scanf("%d", &salary);
	
	rentAllowance= salary*0.2;
	printf("\nramesh rent Allowance is %.2f", rentAllowance);
	
	dearnessAllowance= salary*0.4;
	printf("\nramesh dearness Allowance is %.2f", dearnessAllowance);
	
	grossSalary= salary + rentAllowance + dearnessAllowance; //This formula is incorrect
	printf("\nramesh  gross salary is %.2f", grossSalary); 
	//Run program again and check the output carefully again.
	return 0;
}
