#include <stdio.h>

void generateMagicSquare(int n) 
{
    int magic[n][n];
    int i, j;
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) {
            magic[i][j] = 0;
        }
    }
    int row = 0, col = n / 2;
    
    for (int num = 1; num <= n * n; num++) 
    {
        magic[row][col] = num;
        
        int next_row = (row - 1 + n) % n;
        int next_col = (col + 1) % n;
        
        if (magic[next_row][next_col] != 0)
        {
            row = (row + 1) % n;
        } else
        {
            row = next_row;
            col = next_col;
        }
    }
    printf("%d阶魔方矩阵:\n", n);
    for (i = 0; i < n; i++)
     {
        for (j = 0; j < n; j++) 
        {
            printf("%3d ", magic[i][j]);
        }
        printf("\n");
    }
}
int main() 
{generateMagicSquare(3); 
return 0;
}