/*Write a program using while loop to find the sum of digits of a given number.*/
#include <stdio.h>
int main(){
    int n,r,sum=0;
    puts("Enter the value :");
    scanf("%d",&n);
    int nn=n;
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r;
        
    }
    printf("Sum of digits in %d is %d",nn,sum);
    return 0;
}
