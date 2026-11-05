#include <stdio.h>

int main(void)
{
    int numbers[10];
    int minimum, maximum;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    minimum = maximum = numbers[0];
    for (int i = 1; i < 10; i++) {
        if (numbers[i] < minimum) minimum = numbers[i];
        if (numbers[i] > maximum) maximum = numbers[i];
    }
    printf("%d %d\n", maximum, minimum);
    return 0;
}
