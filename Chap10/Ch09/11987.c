#include <stdio.h>

int main(void)
{
    int counts[10] = {0};
    int value;

    while (scanf("%d", &value) == 1 && value != 0) {
        counts[value / 10]++;
    }

    for (int i = 0; i < 10; i++) {
        if (counts[i] > 0) {
            printf("%d : %d\n", i, counts[i]);
        }
    }
    return 0;
}
