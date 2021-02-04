/*Given the 3 angles of a triangle (in degrees), write a  program to determine whether it is a right triangle, isosceles triangle, right isosceles triangle or equilateral triangle.*/
#include <stdio.h>
int main(){
    int x,y,z;int count=0;
    scanf("%d%d%d",&x,&y,&z);
    int sum=x+y+z;
    if((x==y&&y==z)&&(sum==180))
    puts("Triangle is equilateral");
    else if(((x==90||y==90||z==90)&&(sum==180))&&(x!=z&&z!=y&&x!=y))
    puts("Triangle is right");
    else if(((x==y&&x!=z)||(y==z&&y!=x)||(z==x&&z!=y))&&(sum==180)){
        if(x==90||y==90||z==90){
        puts("Triangle is right isosceles");
        count=1;
        }
        if(count==0)
        puts("Triangle is isosceles");
    }
    else if(((x!=y&&y!=z)||(y!=z&&z!=x))&&(sum==180))
    puts("Triangle is not special");
    else if(sum!=180)
    puts("Not a Triangle");
    return 0;
}
