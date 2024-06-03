/*
Two points in a plane are specified using the coordinates (x1, y1) and (x2, y2).
Write a program that calculates the slope of a line through two non-vertical
points entered by the user.
Hint: m = (y2 – y1)/(x2 – x1)
*/
#include <stdio.h>
int main ()
{
    float x_1,x_2,y_1,y_2;
    float gradient;

    printf("Enter the coordinate of x1 :");
    scanf("%f",&x_1);

    printf("Enter the coordinate of x2 :");
    scanf("%f",&x_2);

    printf("Enter the coordinate of y1 :");
    scanf("%f",&y_1);

    printf("Enter the coordinate of y2 :");
    scanf("%f",&y_2);

    gradient=(y_2-y_1)/(x_2-x_1);
    
    printf("\nThe gradient of the two non vertical points is %2f \n" ,gradient);
    return 0 ;
}
