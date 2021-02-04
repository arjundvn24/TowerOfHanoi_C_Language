/*Write a program to find the roots of given quadratic equation.

The Quadratic equation is of the form ax2+bx+c = 0.

Input Format:

Input consists of 3 integer corresponding to a,b and c respectively.

Output Format:

Print the of the equation formed by the given values of  a,b,c. Display the roots correct to 1 decimal place.*/

#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    puts("Enter the values of a,b,c :");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float x1,x2;
    x1=(-b+sqrt((b*b)-4*a*c))/2*a;
    x2=(-b-sqrt((b*b)-4*a*c))/2*a;
printf("The roots are:\n");
printf("root1 = %0.1f\n",x1);
printf("root2 = %0.1f",x2);
return 0;}
