#include <stdio.h>
int main() {
    float score;
    
    printf("请输入学生成绩(0-100): ");
    scanf("%f", &score);
    
    if (score < 0 || score > 100) {
        printf("出错提示: 成绩应在0-100之间\n");
        return 1;
    }
    
    char grade;
    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'E';
    
    printf("学生等级: %c\n", grade);
    
    return 0;
}