/*Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int salary;
	float rentallowance, dearnessallowance,grosssalary;
	
	printf("enter ramesh basic salary\n");
	scanf("%d", &salary);
	
	rentallowance= salary*0.2;
	printf("\nramesh rent Allowance is &f", rentallowance);
	
	dearnessallowance= salary*0.4;
	printf("\nramesh dearness Allowance is %f", dearnessallowance);
	
	grosssalary= (salary-rentallowance)-dearnessallowance;
	printf("\nramesh  gross salary is %f", grosssalary);
	
	return 0;
}
