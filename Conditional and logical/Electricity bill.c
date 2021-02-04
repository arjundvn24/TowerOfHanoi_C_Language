/*An electricity board charges the following rates to domestic users:

If the number of units consumed is less than or equal to 100, then cost per unit is Rs.1.00
If the number of units consumed is greater than 100 and less than or equal to 300, then cost per unit is Rs.2.00
If the number of units consumed is greater than 300 units, then cost per unit is Rs.3.00
All users are charged a minimum of Rs. 50.00.
If the total amount is more than Rs.1000, then an additional surcharge of 15% is added. Write a program to read the user id, name and number of units consumed by an user and prints the user id, name and charges.

Input Format:
First line of input corresponds to user_id.
Second line of input corresponds to the user name
Third line of input corresponds to number of units consumed by the domestic user.

Output Format:
Print the user_id, name and charges of the domestic user.
Refer sample Input and output for formatting specifications.
Note: Charge should be displayed correct to two decimal places.*/

#include <stdio.h>
int main(){
int uid,cost=0;
float surc;
char name[100];
puts("Enter the user id of user");
scanf("%d",&uid);
puts("Enter the name of user");
scanf("%s",name);
puts("Enter the number of units consumed by user");
int units;
scanf("%d",&units);
if(units<50)
cost=50;
else if(units<=100){
    cost=1*units;
}
else if(units>100&&units<=300){
    cost=2*units;
}
else if(units>300){
cost=3*units;}
if(cost>1000){
  surc= (15*cost)/100;
  cost=cost+surc;
}
float c=(float) cost;
puts("Charge details");
printf("%d %s %0.2f",uid,name,c);
return 0;
}
