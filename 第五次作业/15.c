#include <stdio.h>
#include <string.h>
void reverseString(char str[]) 
{
int length = strlen(str);
int i;
char temp;
    for (i = 0; i < length/2; i++)
     {
        temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }
}
int main() 
{ char str[] = "apple";
    printf("原始字符串: %s\n", str);
    reverseString(str);
    printf("逆转后字符串: %s\n", str);
    return 0;
}