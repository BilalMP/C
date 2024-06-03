/*
Write a program that allows the inputs of x and y coordinates of two points (x1,y1)
and (x2,y2), and determines the distance between them. d = √((x2 – x1)2 + (y2 –
y1)2)
*/

#include <stdio.h>
#include <math.h>
int main ()
{
    float x_1,x_2,y_1,y_2;
    float distance;

    printf("Enter the coordinate of x1 :");
    scanf("%f",&x_1);

    printf("Enter the coordinate of x2 :");
    scanf("%f",&x_2);

    printf("Enter the coordinate of y1 :");
    scanf("%f",&y_1);

    printf("Enter the coordinate of y2 :"); 
    scanf("%f",&y_2);

    distance=sqrt((pow((x_2-x_1),2))+(pow((y_2-y_1),2)));

    printf("\nThe distance between the 2 points is %2f \n" ,distance);
    
    return 0 ;
}