#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    char *p;
    printf("请输入字符串: ");
    fgets(str, 200, stdin);
    p = str;
    while((p = strstr(p, "foo")) != NULL)
    {
        memmove(p + 3, p + 2, strlen(p + 2) + 1);
        *p = 'x';
        *(p + 1) = 'x';*(p + 2) = 'x';
        p=p+3 ;
    }
    printf("替换后: %s", str);
    return 0;
}