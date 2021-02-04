/*Write a C program to find whether the given number is odd or even, using Bitwise ' & ' Operator.

Input Format:
The input consists of an integer.
Output Format:
Output should display whether the input is Odd or Even.  */

#include <stdio.h>
int main(){
    int x;
    puts("Enter the number:\n");
    scanf("%d",&x);
    
  x%2==0?printf("Even"):printf("Odd");
  return 0;

   
    
}
