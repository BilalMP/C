/*
A ladder in leant against a wall as shown below. Write a program that takes as input
the length of the ladder and the angle of inclination (from the ground) and
calculates and displays the maximum height of the wall against which the ladder
can be used.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int angle,ladder;

    printf("Enter the length of the ladder :");
    scanf("%d",&ladder);

    printf("Enter the angle of elevation :");
    scanf("%d",&angle);
    
    printf("The height of the wall is %2f", sin(angle)*ladder);
    return 0;
}