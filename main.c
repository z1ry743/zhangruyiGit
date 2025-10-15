/*#include <stdio.h>

int main( )
{ printf("********************\n");
printf("   very good!\n");
printf("********************\n");
return 0;
}*/



/*#include<stdio.h>
int main()
{
int a,b,sum,minus;
a=123;b=456;
sum=a+b;minus=a-b;
printf ("a+b=%d\na-b=%d\n",sum,minus);
return 0;

}*/

/*#include<stdio.h>
int main()
{
  int a,b,c;
  a=3;
  c=1;
  b=2;
  printf("%d\n",(a+b)*c);
  return 0;
}*/


/*#include<stdio.h>
#define PI 3.14
int main( )
{
float r,area;
printf("\n Enter r  value:");
scanf("%f",&r);
area=PI*r*r;
printf("\n area=%f\n",area);
return 0;

}



/*#include<stdio.h>
int main( )
{
int x,y;
x=5,y=8;
printf("\n%d,%d,%d\n",x,(x+5)*2,y);
return 0;

}*/

#include<stdio.h>
int main()
{
printf( "     *** \n");
printf("    *   \n");
printf("   *   \n" );
printf( "   *  \n ");
printf( "     ***\n");
return 0;
}

#include <stdio.h>
int main() {
    printf("  *  \n");
    printf(" * * \n");
    printf("* * *\n");
    return 0;
}


#include <stdio.h>
int main() {
    int a, b, c, max;
    printf("请输入三个整数：");
    scanf("%d%d%d", &a, &b, &c);
    
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    
    printf("最大值是：%d\n", max);
    return 0;
}