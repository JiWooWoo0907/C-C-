#include <stdio.h>

int main(void)
{
    int numbers[10];
    int oddSum = 0, evenSum = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        if ((i + 1) % 2 == 1) oddSum += numbers[i];
        else evenSum += numbers[i];
    }

    printf("odd : %d\n", oddSum);
    printf("even : %d\n", evenSum);
    return 0;
}
