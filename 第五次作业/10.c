#include<stdio.h>
int main()
{int i;int n=10;
 int a[10];
    int av=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if((i+1)%3==0)
        printf("\n");
    }
    for(i=0;i<n;i++)
    av+=a[i];
    av/=n;
    printf("av=5.2f\n",(float)av);
    return 0;
}