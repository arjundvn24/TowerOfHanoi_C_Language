/*Write a program to find greatest of three numbers , using Ternary Operator.

Input Format:
The input consists of 3 integers.
Output Format:
Output should display the greatest of the 3 numbers.  */

#include <stdio.h>
int main(){
   int x,y,z; puts("Enter the numbers :\n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    int g=(x>y)?(x>z?x:z):(y>z?y:z);
    printf("%d is the greatest number",g);
    return 0;
}
