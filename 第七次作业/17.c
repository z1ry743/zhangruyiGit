#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char *start;
    char *end;
    printf("请输入字符串: ");
    fgets(str, 100, stdin);
    end = str + strlen(str) - 1;
    printf("反向输出: ");
    for(; end >= str; end--)
        printf("%c", *end);
    printf("\n");
    
    return 0;
}