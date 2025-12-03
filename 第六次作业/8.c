#include<stdio.h>
double fun(double x, int y)
{int i;
    double z;
for(i=1,z=x;i<y;i++) z=z*x;
    return z;
}
int main()
{double a=fun(2.0,3);
printf("%.2f\n",a);
 return 0;
}