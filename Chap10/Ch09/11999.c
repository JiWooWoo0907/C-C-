#include <stdio.h>

int main(void)
{
    int counts[11] = {0};
    int score;

    while (scanf("%d", &score) == 1 && score != 0) {
        counts[score / 10]++;
    }

    for (int band = 10; band >= 0; band--) {
        if (counts[band] > 0) {
            printf("%d : %d\n", band * 10, counts[band]);
        }
    }
    return 0;
}
