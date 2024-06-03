/*
Type in the program on quadratic equations and run it.
*/
#include<stdio.h>
#include<math.h>
int main(){
    //Quadratic Equation: ax^2 + bx + c = 0
    int a,b,c;
    float value_1,value_2

    printf("Enter the value of a :");
    scanf("%d",&a);

    printf("Enter the value of b :");
    scanf("%d",&b);

    printf("Enter the value of c :");
    scanf("%d",&c);

    value_1= (((-b)+(sqrt((b*b)-(4*a*c))))/(2*a));
    value_2= (((-b)-(sqrt((b*b)-(4*a*c))))/(2*a));
    
    printf("The value of the quadratic equation is :%f",value_1);
    printf("\nThe value of the quadratic equation is :%f",value_2);
    return 0;
}