#include <stdio.h>
#define N 3
void transpose(int arr[N][N]) {
    int temp;
    for (int i = 0; i < N; i++) {
 for (int j = i + 1; j < N; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

void printMatrix(int arr[N][N]) {
    for (int i = 0; i < N; i++) {
for (int j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Original:\n");
    printMatrix(mat);
    transpose(mat);
    printf("Transposed:\n");
    printMatrix(mat);
    return 0;
}