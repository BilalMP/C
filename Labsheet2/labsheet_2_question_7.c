/*
Modify the program in question 6 so that it allows the input of two values x and n
and it calculates and displays the value of xn+ 3xn-1 + 2xn-2
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int x, n, result;

    printf("Enter the value of x :");
    scanf("%d", &x);

    printf("Enter the value of n :");
    scanf("%d", &n);

    result = pow(x, n) + 3 * pow(x, n-1) + 2 * pow(x, n-2);
    
    printf("The result is : %d", result);
    return 0;
}