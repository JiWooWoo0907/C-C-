#include <stdio.h>

int main(void)
{
    int values[4][2];
    int columnSums[2] = {0};
    int total = 0;

    for (int row = 0; row < 4; row++) {
        scanf("%d %d", &values[row][0], &values[row][1]);
        int rowSum = values[row][0] + values[row][1];
        printf("%d%s", rowSum / 2, row == 3 ? "\n" : " ");
        columnSums[0] += values[row][0];
        columnSums[1] += values[row][1];
        total += rowSum;
    }

    printf("%d %d\n", columnSums[0] / 4, columnSums[1] / 4);
    printf("%d\n", total / 8);
    return 0;
}
