#include <stdio.h>

int main(void)
{
    int values[3][3] = {
        {3, 5, 4},
        {2, 6, 7},
        {8, 10, 1}
    };

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d%s", values[row][col], col == 2 ? "\n" : " ");
        }
    }
    return 0;
}
