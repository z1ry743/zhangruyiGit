#include <stdio.h>
#include <ctype.h>
int main() {
char str[100];
int letters = 0; 
   int intspaces = 0;
   int digits = 0;
     int  intothers = 0;
    int i = 0;
    printf("请输入一行字符: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            letters++;
        } else if (isspace(str[i])) {
            spaces++;
        } else if (isdigit(str[i])) {
            digits++;
        } else {
            others++;
        }
        i++;
    }
     printf("字母个数: %d\n", letters);
    printf("空格个数: %d\n", spaces);
    printf("数字个数: %d\n", digits);
    printf("其他字符个数: %d\n", others);
    return 0;
}