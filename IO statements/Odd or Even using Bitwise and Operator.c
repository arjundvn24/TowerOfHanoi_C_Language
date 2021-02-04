/*
During the Physical Education hour, PT sir has decided to conduct some team games. He wants to split the students in the class into equal sized teams.
In some cases, there may be some students who are left out from teams and he wanted to use the left out students to assist him in conducting the team games.

For instance, if there are 50 students in the class and if the class has to be divided into 7 equal sized teams, 7 students will be there in each team and 1 student will be left out.

PT sir asks your help to automate this team splitting task. Can you please help him out?*/
#include <stdio.h>
int main(){
    int x,y;
    printf("Number of students:\n");
   scanf("%d",&x);
    printf("Number of teams:\n");
    scanf("%d",&y);
    int each=x/y;
    int left=x%y;
    printf("The number of students in each team is %d and left out is %d",each,left);
    return 0;
}
