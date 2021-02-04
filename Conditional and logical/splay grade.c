/*Write a program to accept roll no, name and total mark obtained by a student and assign grades according to the following conditions, display the roll number, name, total mark and grade:
 

Input Format:
The input consists of student roll number, name and total mark of a student.

Output Format:
Print the student roll number, name, total mark and grade of a student.
Refer sample Input and output for formatting specifications.*/


#include <stdio.h>
#include <string.h>    
int main(){
    puts("Enter the roll number of student");
    int roll,marks; 
    char c[30];
    
    scanf("%d",&roll);
    puts("Enter the name of student");
    scanf("%s",c);
    puts("Enter the total mark of student");
    scanf("%d",&marks);
    if(marks>=90){
    char grade[]="A";
    puts("Grade details");
    printf("%d %s %d %s",roll,c,marks,grade);}
    if(marks>=80&&marks<90){
        char grade[]="B";
    puts("Grade details");
    printf("%d %s %d %s",roll,c,marks,grade);}
    
       
    if(marks>=70&&marks<80){
        char grade[]="C";
    puts("Grade details");
    printf("%d %s %d %s",roll,c,marks,grade);}
    
  
    if(marks>=60&&marks<70){
        char grade[]="D";
    puts("Grade details");
    printf("%d %s %d %s",roll,c,marks,grade);}
    
    
    if(marks>=50&&marks<60){
        char grade[]="E";
    puts("Grade details");
    printf("%d %s %d %s",roll,c,marks,grade);}
    
  
    if(marks<50){
        char grade[]="Fail";
    puts("Grade details");
    printf("%d %s %d %s",roll,c,marks,grade);}
    
   
    return 0;
}
