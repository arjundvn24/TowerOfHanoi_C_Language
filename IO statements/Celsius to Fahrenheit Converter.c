/*The relatioship between Celsius (C) and Fahrenheit (F) degrees for measuring temperature is linear. Find an equation relating C and F if 0 C corresponds to 32 F and 100 C corresponds to 212 F.

Write a program to simulate Celsius to Fahrenheit Converter.*/

#include <stdio.h>
int main(){
    float c;
    puts("Temparature in Celsius:\n");
    scanf("%f",&c);
    float F=(1.8*c)+32;
    printf("Temparature in Fahrenheit is %0.1fF",F);
    return 0;
}
