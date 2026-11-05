#include <stdio.h>

int main(void)
{
    int scores[10];
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    printf("sum = %d\n", sum);
    printf("avg = %.1f\n", sum / 10.0);
    return 0;
}
