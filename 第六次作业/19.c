#include <stdio.h>
#include <string.h>
void countChars(char str[]) {
    int count[256] = {0}; 
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) 
    {
    count[(int)str[i]]++;
    }
    
    for (int i = 0; i < 256; i++) 
    {
        if (count[i] > 1 && i != ' ') 
        { 
            printf("'%c' appears %d times\n", (char)i, count[i]);
        }
    }
}

