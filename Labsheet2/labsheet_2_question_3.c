/*
Write a program that allows the input of the 2 (shorter) sides of a right-angled
triangle and it calculates and displays the length of the hypotenuse, using
Pythagora’s theorem.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int len_1,len_2;

    printf("Enter the length 1 of the triangle :");
    scanf("%d",&len_1);

    printf("Enter the length 2 of the triangle :");
    scanf("%d",&len_2);

    printf("The length of the hypotenuse is %f",(sqrt(pow(len_1,2)+pow(len_2,2))));
    return 0;
}