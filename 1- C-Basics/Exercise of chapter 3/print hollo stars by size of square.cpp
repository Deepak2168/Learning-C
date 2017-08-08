/*Modify the program you wrote to print a filled square so that it prints a hollow square. For example, if your program reads a size of 5, it should print:
*****
*.     *
*.     *
*.     *
*****     */

#include<stdio.h>
#include<conio.h>
int main()
{
	int l = 0, side, s;

  printf("Square Size?\n");
  scanf("%d", &side );

  while (l < side) {
    s = 0;
    while (s < side) {
      if ( l == 0 || l == side - 1 || s == 0 || s == side - 1 ) {
        printf("*");
      } else {
        printf(" ");
      }
      s++;
    }
    printf("\n");
    l++;
  }

  return 0;
}
