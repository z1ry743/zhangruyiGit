#include <stdio.h>
int main()
{
    int a[6] = {2, 4, 6, 8, 10, 12};
    int b, i, *p;
    b= 0;
    p = a;
    
    for (i = 0; i < 6; i++)
        b += *(p + i); 
    printf("b=%d\n", b);
    return 0;
}