#include<stdio.h>
int main()
{
   int a,m,w,g;
   printf("请输入m or n m为男性w为女性以及体重");
   scanf("%d%d",&a,&g);
   if(a=m)
   {
    if(g>120)
    printf("200ml\n");
   else
   printf("180ml\n");
   }
   if(a=w)
   {
    if(g>100)
    printf("150ml\n");
   else
   printf("120ml\n");
   }

}