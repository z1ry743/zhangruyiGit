#include <stdio.h>

void findNumbers() {
    int i, tens, units;
    for (i = 10; i < 100; i++) {
    if (i % 3 == 0) {
        tens = i / 10;
        units = i % 10;
     if (tens == 5 || units == 5)
             {
                printf("%d ", i);
            }
        }
    }
    printf("\n");
}

int main() {
 findNumbers();
    return 0;
}