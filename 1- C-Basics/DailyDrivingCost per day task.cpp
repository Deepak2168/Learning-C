/*
(Car-Pool Savings Calculator) Research several car-pooling websites. Create an application that calculates your daily driving cost, so that you can estimate how much money could be saved by car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic congestion. The application should input the following information and display the user’s cost per day of driving to work:
 
  a)  Total miles driven per day. 
  b)  Cost per gallon of gasoline. 
  c)  Average miles per gallon. 
  d)  Parking fees per day. 
  e)  Tolls per day.  

*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int TotalMiles, GasolineCost, MilesPerGasoline;
	int ParkingFees, Tolls, DailyDrivingCost;
	
	printf("Enter total Miles Driven per day :");
	scanf("%d", &TotalMiles);
	
	printf("\nEnter Cost of Gallon of Gassoline :");
	scanf("%d", &GasolineCost);
	
	printf("\nEnter Average Miles per Gallon :");
	scanf("%d", &MilesPerGasoline);
	
	printf("\nEnter Parking Fees per day :");
	scanf("%d", &ParkingFees);
	
	printf("\nEnter Tolls per day :");
	scanf("%d", &Tolls);
	
	DailyDrivingCost=(TotalMiles/MilesPerGasoline)*GasolineCost+ParkingFees+Tolls;
	
	printf("\nYour Total Driving Cost per Day is  : %d", DailyDrivingCost);
	
	return 0;
}
//Checked and no comments
