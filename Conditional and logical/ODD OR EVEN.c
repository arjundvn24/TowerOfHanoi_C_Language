/*Write a program to find whether a given integer is odd  or even number.*/
#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x%2==0)
    printf("%d is an even number\n",x);
    else
    printf("%d is an odd number\n",x);
    return 0;
}
