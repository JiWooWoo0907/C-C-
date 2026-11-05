#include <stdio.h>

int main(void)
{
    int n;
    int triangle[10][10] = {0};

    scanf("%d", &n);
    for (int row = 0; row < n; row++) {
        triangle[row][0] = triangle[row][row] = 1;
        for (int col = 1; col < row; col++) {
            triangle[row][col] = triangle[row - 1][col - 1] + triangle[row - 1][col];
        }
    }

    for (int row = n - 1; row >= 0; row--) {
        for (int col = 0; col <= row; col++) {
            printf("%d%s", triangle[row][col], col == row ? "\n" : " ");
        }
    }
    return 0;
}
