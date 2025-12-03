#include <stdio.h>

int main()
{
    int matrix[5][5] =
     {
        {1, 2, 3, 4, 5},{6, 7, 8, 9, 10}, {11, 12, 13, 14, 15},{16, 17, 18, 19, 20},{21, 22, 23, 24, 25}
    };
    
    int sum_main = 0, sum_secondary = 0;
    int i;
    for (i = 0; i < 5; i++)
     {
    sum_main += matrix[i][i]; 
    sum_secondary += matrix[i][4-i]; 
    }
    
    printf("主对角线元素之和: %d\n", sum_main);
    printf("副对角线元素之和: %d\n", sum_secondary);
    printf("两条对角线元素总和: %d\n", sum_main + sum_secondary);
    
    return 0;
}