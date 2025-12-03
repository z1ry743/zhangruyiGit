#include <stdio.h>
int digit(int n, int k) {
    int i;
    for (i = 1; i < k; i++) {
        n =n/ 10;
    }
    return n % 10;
}
int main() {
    int n, k;
    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);
    printf("Digit: %d\n", digit(n, k));
    return 0;
}