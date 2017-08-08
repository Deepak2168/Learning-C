

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

if(a>b && a>c)
{
	printf("\nthe largest number is %d", a);
}
if(b>a && b>c)
{
	printf("\nthe largest number is %d", b);
}
if(c>a && c>b)
{
	printf("\nthe largest number is %d", c);
}

if(a<b && a<c)
{
	printf("\nThe smallest number is %d", a);
}
if(b<a && b<c)
{
	printf("\nThe smallest number is %d", b);
}
if(c<a && c<b)
{
	printf("\nThe smallest number is %d", c);
}
/*
printf( "\nthe smallest number is %d", a); //Find smallest by using conditional operators
printf("\nthe largest number is %d", c);   //Find largest by using conditional operators
return 0;*/
}

