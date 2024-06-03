/*
Write a program that calculates the cost per square centimetre of a circular
pizza, given its diameter and price as inputs.
*/
#include <stdio.h>
#include <math.h>
int main() 
{
   double price,area,cost,diameter;
   printf("Enter the diameter :");
   scanf("%lf",&diameter);
   printf("Enter the price :");
   scanf("%lf",&price);
   diameter =diameter/2;
   area = (M_PI * (diameter*diameter));
   printf("%2f\n",area);
   cost=(price/(float)area);
   printf("The cost per square centimetre is %lf ",cost);
   return 0;
}