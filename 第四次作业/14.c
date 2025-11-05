#include <stdio.h>

int main() {
    int a, b, temp, gcd, lcm;
    
    printf("请输入两个正整数：");
    scanf("%d %d", &a, &b);
    

    int x = a, y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
    
    lcm = a * b / gcd;
    
    printf("%d和%d的最大公约数是：%d\n", a, b, gcd);
    printf("%d和%d的最小公倍数是：%d\n", a, b, lcm);
    
    return 0;
}




#include <stdio.h>

int main() {
    int day = 9; 
    int total = 1; 
    
    printf("第10天剩下:1块\n");
    
    
    for (day = 9; day >= 1; day--) {
        total = (total + 1) * 2;
        printf("第%d天剩下:%d块\n", day, total);
    }
    
    printf("\n小明妈妈总共买了:%d块巧克力\n", total);
    return 0;
}




