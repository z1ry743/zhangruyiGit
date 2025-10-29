#include <stdio.h>
int main()
 { int x ,y ;
 scanf("%d",&x);
if(x>9)y=-1;
 else if (x>3&&x<=9) y=x*(x+2);
 else if (x>-1&&x<=3) y=2*x;       //24  4 2 -4 -1
 if (x<=-1)y=x-1;
                                  
 
 printf("%d\n", y);
 return 0;
 }
