#include <stdio.h>

int main(void)
{
    int value;
    int count = 0, sum = 0;

    while (scanf("%d", &value) == 1 && value != 0) {
        if (value % 5 == 0) {
            count++;
            sum += value;
        }
    }

    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", count == 0 ? 0.0 : (double)sum / count);
    return 0;
}
