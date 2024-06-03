/*
Given the length of two sides of a triangle and the size of the angle between the
two sides, the length of the third side can be calculated from the Cos Rule: a2=b2 +
c2 – 2bc Cos A. Other angles can also be calculated from the sine rule, which is
a
sine A
= b
sine B
= c
sineC. Furthermore, the area is calculated as 12
ab sineC .
Write a program that allows the input of two sides of a triangle and the angle
between the two sides and it displays the length of the 3rd side, the remaining
angles as well as the area of the triangle.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, angle_A_radians, angle_B, angle_C;

    printf("Enter the length of the first side (a): ");
    scanf("%lf", &a);

    printf("Enter the length of the second side (b): ");
    scanf("%lf", &b);

    printf("Enter the angle between the two sides (A) in degrees: ");
    scanf("%lf", &angle_B);

    // Convert the angle from degrees to radians
    angle_A_radians = (180.0 - angle_B) * (M_PI / 180.0);

    // Calculate the length of the third side (c) using the Cosine Rule
    c = sqrt(a * a + b * b - 2 * a * b * cos(angle_A_radians));

    // Calculate the remaining angles (B and C) using the Sine Rule
    angle_B = asin(b * sin(angle_A_radians) / c);
    angle_C = M_PI - angle_A_radians - angle_B;

    // Convert the angles from radians to degrees
    angle_A = angle_A_radians * (180.0 / M_PI);
    angle_B = angle_B * (180.0 / M_PI);
    angle_C = angle_C * (180.0 / M_PI);

    // Calculate the area of the triangle
    double area = 0.5 * a * b * sin(angle_C);

    printf("The length of the third side (c) is: %.2lf\n", c);
    printf("The angles of the triangle are: A = %.2lf degrees, B = %.2lf degrees, C = %.2lf degrees\n", angle_A, angle_B, angle_C);
    printf("The area of the triangle is: %.2lf square units\n", area);

    return 0;
}
