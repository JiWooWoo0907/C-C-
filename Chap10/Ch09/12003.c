#include <stdio.h>

int main(void)
{
    int values[5][5] = {0};

    values[0][0] = values[0][2] = values[0][4] = 1;
    for (int row = 1; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            int left = col > 0 ? values[row - 1][col - 1] : 0;
            int right = col < 4 ? values[row - 1][col + 1] : 0;
            values[row][col] = left + right;
        }
    }

    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            printf("%d%s", values[row][col], col == 4 ? "\n" : " ");
        }
    }
    return 0;
}
