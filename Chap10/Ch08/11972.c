#include <stdio.h>

int main(void)
{
    int numbers[10];
    int minimum;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    minimum = numbers[0];
    for (int i = 1; i < 10; i++) {
        if (numbers[i] < minimum) {
            minimum = numbers[i];
        }
    }
    printf("%d\n", minimum);
    return 0;
}
