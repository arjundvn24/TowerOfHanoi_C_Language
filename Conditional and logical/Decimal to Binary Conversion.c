/*Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its equivalent binary number using while loop.*/

#include <stdio.h>
#include <math.h>
int main(){
    int n,r,result=0,a=1;
    puts("Enter the decimal number");
    scanf("%d",&n);
    int nncopy=n;
  while(n){
      r=n%2;
      n=n/2;
result=result+r*a;
a=a*10;
  }
  printf("The binary equivalent of decimal number %d is %d",nncopy,result);
  return 0;
}
