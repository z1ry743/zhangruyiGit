#include <stdio.h>
int main() {
    int num, original, digit, sum = 0;
    
    printf("请输入一个三位正整数: ");
    scanf("%d", &num);
    
    if (num < 100 || num > 999) {
        printf("输入错误! 必须是三位数。\n");
        return 1;
    }
    
    original = num;
    
    
    while (num > 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    
    if (sum == original)
        printf("%d 是水仙花数\n", original);
    else
        printf("%d 不是水仙花数\n", original);
    
    return 0;
