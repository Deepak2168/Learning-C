

#include <stdio.h>
int main( )
{
int a, b , c, sum, avg, product ;

 a= 13 ;
 b= 14 ;
 c= 27 ;

sum = a+b+c ;
printf ( "Sum is %d " , sum ) ;

product = a*b*c;
printf("\nproduct is %d" , product);

avg = (a+b+c)/3;
printf("\naverage is %d", avg);

printf( "\nthe smallest number is %d", a);
printf("\nthe largest number is %d", c);
return 0;
}

