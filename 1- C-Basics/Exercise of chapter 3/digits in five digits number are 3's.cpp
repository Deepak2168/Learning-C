/*Write a program that reads an integer and determines and prints how many digits in the integer are 3s.*/

#include<stdio.h>
#include<conio.h>

int main()
 {
  int a, b, c, d, e, num , d1 , d2 , d3 , d4 , d5 ;
  printf( "Input a five-digit integer:\n" );
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
 
  int count=0;
 
  if ( d1 == 3 ) {
    count++;
  }
  if ( d2 == 3) {
    count++;
  }
  if ( d3 == 3 ) {
    count++;
  }
  if ( d4 == 3 ) {
    count++;
  }
  if ( d5 == 3 ) {
    count++;
  }

  printf( "There are %d 3's in %d\n", count, num );

  return 0;
}

