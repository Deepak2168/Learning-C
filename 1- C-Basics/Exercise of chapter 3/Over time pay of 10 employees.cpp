/*Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours.
 Assume that employees do not work for fractional part of an hour. */
 
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
    int i, tWorked, oTime, oPay;
    for(i=1;i<=10;i++)
    {
        printf("\nEnter the time employee worked (in hours)\n ");
        scanf("%d",&tWorked);
        if(tWorked>40)
        {
            oTime=tWorked-40;
            oPay=oPay+(12*oTime);
        }
    }
    printf("\nTotal Overtime Pay Of 10 Employees Is %d", oPay);
    return 0;

 }
 //There is problem in formula or anyother statment i don't know .. i tried but can't solve ..
