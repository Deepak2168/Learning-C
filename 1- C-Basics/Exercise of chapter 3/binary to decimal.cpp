/*Input a five digit integer containing only 0s and 1s (i.e., a “binary” integer) and 
print its decimal equivalent. [Hint: Use the remainder and division operators to 
pick off the “binary” number’s digits one at a time from right to left. 
Just as in the decimal number system, in which the rightmost digit has a positional value of 1, 
and the next digit left has a positional value of 10, then 100, then 1000, and so on, 
in the binary number system the rightmost digit has a positional value of 1,
 the next digit left has a positional value of 2, then 4, then 8, and so on. 
 Thus the decimal number 234 can be interpreted as 4 * 1 + 3 * 10 + 2 * 100. 
 The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.] */
 
 
#include <stdio.h>
#include<conio.h>

int main()
{
  int a, b, c, d, e, num , d1 , d2 , d3 , d4 , d5 , decimal ;

  printf( "Enter the number which should be in Binary form \n" );
  scanf("%d", &num );

  a  = num / 10;
  d5 = num % 10;
  b  = a / 10;
  d4 = a % 10;
  c  = b / 10;
  d3 = b % 10;
  d  = c / 10;
  d2 = c / 10;
  e  = d / 10;
  d1 = d % 10;

  if ( d5 == 1 ) 
    {
    d5 = 16;
    printf( "%d ", d5 );
	}
	else 
	 {
      printf("%d ", d5);
     }

  if ( d4 == 1 )
   {
    d4 = 8;
    printf( "%d ", d4 );
    }
	 else 
	 {
       printf("%d ", d4 );
     }

  if ( d3 == 1 ) 
    {
    d3 = 4;
    printf( "%d ", d3 );
    } 
	else
	 {
      printf("%d ", d3 );
  }

  if ( d2 == 1 ) 
    {
    d2 = 2;
    printf( "%d ", d2 );
    } 
	else
	 {
      printf("%d ", d2 );
     }

  if ( d1 == 1 ) 
    {
    d1 = d1 * 1;
    printf( "%d ", d1 );
    }
	 else 
	 {
      printf("%d ", d1 );
     }

  decimal = d1 + d2 + d3 + d2 + d1;
  printf("\nEquivalent decimal number is %d \n", decimal );

  return 0;
}
