#include <stdio.h>

int main(void)
{
    int values[3][5] = {
        {5, 8, 10, 6, 4},
        {11, 20, 1, 13, 2},
        {7, 9, 14, 22, 3}
    };

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 5; col++) {
            printf("%2d%s", values[row][col], col == 4 ? "\n" : "   ");
        }
    }
    return 0;
}
