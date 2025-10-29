#include <stdio.h>
int main() {
    float p, bonus, salary = 500;
    
    printf("请输入工程利润(元): ");
    scanf("%f", &p);
    
    if (p <= 1000) {
        bonus = 0;
    }
    else if (p <= 2000) {
        bonus = (p - 1000) * 0.10;
    }
    else if (p <= 5000) {
        bonus = 1000 * 0.10 + (p - 2000) * 0.15;
    }
    else if (p <= 10000) {
        bonus = 1000 * 0.10 + 3000 * 0.15 + (p - 5000) * 0.20;
    }
    else {
        bonus = 1000 * 0.10 + 3000 * 0.15 + 5000 * 0.20 + (p - 10000) * 0.25;
    }
    
    salary += bonus;
    printf("提成: %.2f元\n", bonus);
    printf("总薪水: %.2f元\n", salary);
    
    return 0;
}