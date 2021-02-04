/*Ajay, Binoy and Chandru were very close friends at school. They were very good in Mathematics and they were the pet students of Emily Mam. Their gang was known as 3-idiots. Ajay, Binoy and Chandru live in the same locality.

A new student Dinesh joins their class and he wanted to be friends with them. He asked Binoy about his house address. Binoy wanted to test Dinesh's mathematical skills. Binoy told Dinesh that his house is at the midpoint of the line joining Ajay's house and Chandru's house. Dinesh was puzzled. Can you help Dinesh out?

Given the coordinates of the 2 end points of a line (x1,y1) and (x2,y2), write a  program to find the midpoint of the*/

#include <stdio.h>
int main(){
    float x1,x2,y1,y2;
    puts("X1\n");
    scanf("%f",&x1);
     puts("Y1\n");
    scanf("%f",&y1);
     puts("X2\n");
    scanf("%f",&x2);
     puts("Y2\n");
    scanf("%f",&y2);
    float xmid=(x1+x2)/2;
    float ymid=(y1+y2)/2;
    printf("Binoy's house is located at (%0.1f,%.1f)",xmid,ymid);
    return 0;
}
