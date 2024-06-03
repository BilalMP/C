/*
A toy is made of two balls, one fitted inside the other one as shown in the
diagram below. The space in-between the balls is filled with a liquid. Write a
program that allows the input of the radius of each of the balls and it calculates
and displays the volume of the liquid.
*/
#include <stdio.h>
#include <math.h>
int main(){
    int radius_1,radius_2;
    float big_volume,small_volume,volume_liquid;

    printf("Enter the radius of big ball :");
    scanf("%d",&radius_1);

    printf("Enter the radius of small ball :");
    scanf("%d",&radius_2);

    big_volume = 0.75 * M_PI * pow(radius_1,3);
    small_volume = 0.75 * M_PI * pow(radius_2,3);
    volume_liquid = big_volume - small_volume;
    
    printf("The volume of the liquid is %f",volume_liquid);
    return 0;
}