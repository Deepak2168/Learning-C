/*If the ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the
three.*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int RamAge, ShyamAge, AjayAge;
	
	printf("Enter age of Ram and Ajay\n");
	scanf("%d%d", &RamAge,&AjayAge);
	printf("Enter shyam Age\n");
	scanf("%d", &ShyamAge);
	
	if(RamAge>AjayAge && ShyamAge>AjayAge)
	{
    	printf("\nYoungest one is Ajay and his age is : %d", AjayAge);
    }
    if(RamAge>ShyamAge && AjayAge>ShyamAge)
    {
    	printf("\nYoungest one is Shyam and his age is : %d ", ShyamAge);
	}
	if(ShyamAge>RamAge && AjayAge>RamAge)
	{
		printf("\nYoungest one is Ram and his age is : %d", RamAge);
	}
    
		

	    
	return 0;
}

//Check your program for following ages of these three:
// Ram = 26, Shyam = 27, Ajay = 25
