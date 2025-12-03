#include <stdio.h>

int sum_array(int a[], int n)
{
    int sum = 0;
    int *p = a;
    for(p=a; p < a + n; p++)
    {
    sum += *p;
    }
    return sum;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    printf("数组元素和: %d\n", sum_array(arr, 5));
    return 0;
}