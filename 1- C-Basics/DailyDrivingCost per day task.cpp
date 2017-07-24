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
