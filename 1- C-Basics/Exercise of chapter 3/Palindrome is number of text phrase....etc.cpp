/*A palindrome is a number or a text phrase that reads the same backward as forward. 
For example, each of the following five-digit integers is a palindrome: 12321, 55555, 45554 and 11611. 
Write a program that reads in a five-digit integer and determines whether or not it’s a palindrome. 
[Hint: Use the division and remainder operators to separate the number into its individual digits.] */

#include <stdio.h>
#include<conio.h>

int main() {
  int n, a, b, c, d, e,d1,d2,d3,d4,d5;
  int digit = 0;

  printf( "Enter one 5 digit number: \n" );
  scanf( "%d", &n );

  a  = n / 10;
  d5 = n%10;
  b  = a/10;
  d4 = a%10;
  c  = b/10;
  d3 = b%10;
  d  = c/10;
  d2 = c/10;
  e  = d/10;
  d1 = d%10;
  if ( d1 == d5 && d2== d4 ) {
    printf( "This is palindrome\n" );
  }

  if ( d1 != d5 || d2 != d4 ) {
    printf( "its not a palindrome\n" );
  }

  return 0;
}
