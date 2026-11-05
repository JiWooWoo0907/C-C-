#include <stdio.h>

int main(void)
{
    int values[5][5];

    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            if (row == 0 || col == 0) {
                values[row][col] = 1;
            } else {
                values[row][col] = values[row - 1][col] + values[row][col - 1];
            }
        }
    }

    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            printf("%d%s", values[row][col], col == 4 ? "\n" : " ");
        }
    }
    return 0;
}
