#include <stdio.h>

int main(void)
{
    int counts[11] = {0};
    int value;

    while (scanf("%d", &value) == 1 && value >= 1 && value <= 10) {
        counts[value]++;
    }

    for (int i = 1; i <= 10; i++) {
        if (counts[i] > 0) {
            printf("%d : %d\n", i, counts[i]);
        }
    }
    return 0;
}
