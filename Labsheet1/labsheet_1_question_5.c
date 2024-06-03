/*
The Konditorei coffee shop sells coffee at Rs 25.00 a cup plus cost of delivery.
For delivery, there is a fixed initial cost of Rs 15.00 and an additional cost Rs2.50
per cup . Eg. For one cup the delivery cost is Rs17.50, for 2 cups it is Rs 20.00,
while for 10 cups it is Rs 40.00. Write a program that calculates the cost of an
order. (Note: Input should be no. of cups ordered)
*/
#include <stdio.h>
#include <math.h>
int main() {
    int cup;
    float cost_order;
    const int price_coffee = 25;
    const int cost_delivery = 15;
    printf("Enter the number of cups of coffee :");
    scanf("%d",&cup);
    cost_order = (price_coffee*cup)+ cost_delivery+(2.5*cup);
    printf("The cost of an order %lf \n",cost_order);
    return 0;
}