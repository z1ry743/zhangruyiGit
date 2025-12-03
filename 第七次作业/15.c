#include<stdio.h>
int main()
{
    int arr[15] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29};
    int num, *p, found = 0;
    
    printf("请输入要查找的数: ");
    scanf("%d", &num);
    p = arr;
    for(int i = 0; i < 15; i++)
    {
        if(*(p + i) == num)
        {
            printf("找到该数，位置: %d\n", i);
            found = 1;
            break;
        }
        if(*(p + i) > num) break; 
    }
    
    if(!found)
    printf("404 not found\n");
    
    return 0;
}


#include <stdio.h>
#include <stdbool.h>

bool search(int a[], int n, int key)
{
    int *p = a;
    for(; p < a + n; p++)
    {
        if(*p == key)
         return true;
    }
    return false;
}

int main()
{
    int arr[] = {1,3,5,7,9};
    int key;
    printf("请输入要查找的数: ");
    scanf("%d", &key);
     if(search(arr, 5, key))
        printf("找到\n");
    else
        printf("未找到\n");
        return 0;
}