/*
Write a program that allows the input of a value x and calculates and displays the
value of x5 + 3x4+2x3
*/
#include<stdio.h>
#include<math.h>
int main(){
    int x,result;

    printf("Enter the value of x :");
    scanf("%d",&x);

    result= pow(x,5)+3*pow(x,4)+2*pow(x,3);
    
    printf("The result is : %d",result);
    return 0;
}