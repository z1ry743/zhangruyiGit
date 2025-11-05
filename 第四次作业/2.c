#include<stdio.h>
int main()
{
    int x=2,y=6,z=3;
    do
   y=y-1;
   while (z-->0&&++x<5);
   printf("x=%d\ty=%d\tz=%d\n",x,y,z);  //x=5 y=3 z=0
   return 0;
   
}