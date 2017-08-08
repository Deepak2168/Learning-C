/*Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. 
Rules for the game are as follows:  
- There are 21 matchsticks. - The computer asks the player to pick 1, 2, 3, or 4 matchsticks. 
- After the person picks, the computer does its picking. - 
Whoever is forced to pick up the last matchstick loses the game.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int matchsticks = 21, user, computer;

    printf("Enter valid number which should be less then 4 :\n\nIf you enters invalid number then computer wins the game\n\n");

    while (matchsticks >= 1)
    {
      printf("\nAvailable Matchsticks number is : %d.", matchsticks);
      printf("\n\nYour Turn...\n\nPick up the matchstick(s)-- (1-4): ");
	  scanf ("%d", &user);

    if (user>4)
     {
       printf("Invalid Selection"); 
       break;
     }

    computer=5-user;
	printf("\n\nComputer's Turn...\n\nComputer chooses:%d", computer);

    matchsticks = matchsticks - user - computer;
    continue;

    if(matchsticks==1)

    break;
   }

    matchsticks--;
    printf("\nComputer Wins The Game ");
	
}
