#include<stdio.h>
int main()
{
    int x, y ,z ,mid ,dec;
    printf("to input data:\n");
    scanf("%d %d %d",&x,&y,&z);
    if(x<y)
    {
        mid=x;x=y;y=mid;
    }
   
   if(x<z)
    {
        mid=x;x=z;z=mid;
    }

   if(y<z)
    {
        mid=y;y=z;z=mid;
    

    }

    printf("请输入一个整数，程序根据其正负判断输出：\n");
    scanf("%d",&dec);
    if(dec>=0)
    printf("max:%d\n",x);
    
   eles printf("min:%d\n",z);



}