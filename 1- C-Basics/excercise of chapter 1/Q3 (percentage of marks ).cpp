/*If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100.*/


#include<stdio.h>
#include<conio.h>
int main()
{
 float s1, s2,s3,s4,s5, Aggregate;
 int Percentage;
 
 printf("enter your subject marks\n");
 scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

Percentage =(s1+s2+s3+s4+s5)*100/500;
printf("your total percentage is %f", Percentage); //show percentage with two decimal points

}
