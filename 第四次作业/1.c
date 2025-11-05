#include<stdio.h>
int main()
{
    int a=2,b=8;
    while (b--<0)
  
       b-=a;              a++;//a=3 b=7
       printf("a=%d,b=%d\n",a,b);
       return 0;
   
    
}