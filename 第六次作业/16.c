#include <stdio.h>

int check(int x, int y, int n) {
    if (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1)
        return 1;
    else
        return 0;
}

int main() 
{
    int x;
    int y;
    int z;
    printf("Enter x, y, z: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Result: %d\n", check(x, y, z));
    return 0;
}