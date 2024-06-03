/*
Write a program that requests the user to input the radius of a circle and it calculates and
displays the area of the circle (Assume pi to be 3.142)
*/

#include <stdio.h>
#include <math.h>
int main()
{
   int radius;
   float area;

   printf("Enter the radius : ");
   scanf("%d", &radius);

   area = (M_PI * (radius * radius));

   printf("The area of the circle is :%2f \n", area);

   return 0;
}