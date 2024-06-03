/*
The figure below shows a concrete cylindrical pillar with a cylindrical hole in the
middle. The hole is of two parts. One part is of height h1, with radius r1, the
other part is of height h2, with radius r2. The pillar has height h and radius r.
Write a program, that takes as inputs the values of h, r, h1, r1 and r2 and
calculates the volume of concrete required to construct such a pillar with the
given values.
Note: h = h1 + h2
*/
#include <stdio.h>
#include <math.h>
int main(){
    float concrete_cylinder;
    int h,r,h_1,r_1,r_2,h_2;
    float big_cylinder,medium_cylinder,small_cylinder;

    printf("Enter the height of the big cylinder: ");
    scanf("%d",&h);

    printf("Enter the radius of the big cylinder: ");
    scanf("%d",&r);

    printf( "Enter the height of the small cylinder: ");
    scanf("%d",&h_1);

    printf( "Enter the radius of the small cylinder: ");
    scanf("%d",&r_1);

    printf("Enter the radius of the medium cylinder: ");
    scanf("%d",&r_2);

    big_cylinder = M_PI*r*r*h;
    printf("\nThe volume of the big cylinder is  %f \n",big_cylinder);

    h_2=h-h_1;
    printf("\nThe height of the medium cylinder is %d ",h_2);  

    medium_cylinder= (M_PI*r_2*r_2*h_2);
    printf("\nThe volume of the medium cylinder is %f  " ,medium_cylinder);  

    small_cylinder= (M_PI*r_1*r_1*h_1);
    printf("\nThe volume of the small cylinder is %f ",small_cylinder);

    concrete_cylinder=big_cylinder-(medium_cylinder+small_cylinder);
    
    printf("\n\nThe volume concrete required to construct such a pillar is %f ",concrete_cylinder);
    return 0 ;
}
