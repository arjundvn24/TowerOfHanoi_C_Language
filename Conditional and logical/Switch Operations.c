/*The 4 basic mathematical operations are Addition, Subtraction, Multiplication and Divison. They are actually the core part in every mathematical problem.

Develop a program to peform all the mathematical operation in a menu driven format using a Switch case statement.
*/

#include <stdio.h>
int main(){
    int a,b,n,result;
    puts("Enter the first value :");
    scanf("%d",&a);
    puts("Enter the second value :");
    scanf("%d",&b);
    puts("Enter the choice from the menu");
    puts("1.Addition");
    puts("2.Subtraction");
    puts("3.Multiplication");
    puts("4.Division");
    scanf("%d",&n);
 switch(n){
       case 1:
       result=a+b;
       break;
       case 2:
       result=a-b;
       break;
       case 3:
       result=a*b;
       break;
       case 4:
      result=a/b;
       break;
   }
   struct abc{
       int aa;
       char op[25];
   };
   struct abc ab1={1,"Addition"};
   struct abc ab2={2,"Subtraction"};
   struct abc ab3={3,"Multiplication"};
   struct abc ab4={4,"Division"};
   if(n==ab1.aa)
   printf("The value after %s is %d.",ab1.op,result);
   if(n==ab2.aa)
   printf("The value after %s is %d.",ab2.op,result);
   if(n==ab3.aa)
   printf("The value after %s is %d.",ab3.op,result);
   if(n==ab4.aa)
   printf("The value after %s is %d.",ab4.op,result);
   return 0;
   }
