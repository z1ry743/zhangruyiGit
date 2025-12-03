#include <stdio.h>
int main() 
{double height = 100.0; 
 double total_distance = 0.0; 
int i;
    for (i = 1; i <= 10; i++) 
    {
    if (i == 1) 
    {
    total_distance += height; 
    } else
    {
            total_distance += 2 * height; 
    }
        height /= 2; 
    }
    printf("第10次落地时，共经过: %.6f 米\n", total_distance);
    printf("第10次反弹高度: %.6f 米\n", height);
    return 0;
}