#include <stdio.h>

int main(void)
{
    int triangle[5][5] = {0};

    for (int row = 0; row < 5; row++) {
        triangle[row][0] = 1;
        triangle[row][row] = 1;
        for (int col = 1; col < row; col++) {
            triangle[row][col] = triangle[row - 1][col - 1] + triangle[row - 1][col];
        }
    }

    for (int row = 0; row < 5; row++) {
        for (int col = 0; col <= row; col++) {
            printf("%d%s", triangle[row][col], col == row ? "\n" : " ");
        }
    }
    return 0;
}
