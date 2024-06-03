/*
A car travels a distance d1 at a speed s1, followed by a distance d2 at a speed s2 and finally a
distance d3 at a speed s3. Assuming all distances to be in km and all speeds in km/h, write a
program to input the values of s1, s2, s3 and d1, d2, d3 and display:
 The total distance travelled.
 The total time taken for the whole journey and
 The average speed over the journey.
*/
#include <stdio.h>
#include <math.h>
int main()
{
   int s1, s2, s3, d1, d2, d3;
   int totaldistance, averagespeed;
   float totaltime;
   printf("Enter speed 1 : ");
   scanf("%d", &s1);
   printf("Enter speed 2 : ");
   scanf("%d", &s2);
   printf("Enter speed 3 : ");
   scanf("%d", &s3);
   printf("Enter distance 1 : ");
   scanf("%d", &d1);
   printf("Enter distance 2 : ");
   scanf("%d", &d2);
   printf("Enter distance 3 : ");
   scanf("%d", &d3);
   totaldistance = (d1 + d2 + d3);
   totaltime = (d1 / s1) + (d2 / s2) + (d3 / s3);
   averagespeed = (s1 + s2 + s3) / 3;
   printf("\nThe total distance travelled %d\n", totaldistance);
   printf("The total time for the whole journey %2f \n", totaltime);
   printf("the average speed is %d \n", averagespeed);
   return 0;
}