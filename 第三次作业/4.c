#include<stdio.h>
int main()
{
    int i,j,k;
    int m,n,p;
    i=8;
    j=10;
    k=12;
    m=++i;
    printf("i=%d\n",i);
    printf("m=%d\n",m);
    n=j--;
     printf("j=%d\n",j);      //9 9 9  10 11  111
    
    printf("n=%d\n",n);
    p=(++m)*(n++)+(--k);
     printf("k=%d\n",k);
    printf("p=%d\n",p);

}