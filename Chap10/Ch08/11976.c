#include <stdio.h>

int main(void)
{
    int numbers[10];
    int evenPositionSum = 0;
    int oddPositionSum = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        if ((i + 1) % 2 == 0) {
            evenPositionSum += numbers[i];
        } else {
            oddPositionSum += numbers[i];
        }
    }

    printf("sum : %d\n", evenPositionSum);
    printf("avg : %.1f\n", oddPositionSum / 5.0);
    return 0;
}
