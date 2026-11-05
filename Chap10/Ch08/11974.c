#include <stdio.h>

int main(void)
{
    int value;
    int minimum = 0, maximum = 0;
    int count = 0;

    while (scanf("%d", &value) == 1 && value != 0) {
        if (count == 0 || value < minimum) minimum = value;
        if (count == 0 || value > maximum) maximum = value;
        count++;
    }

    printf("%d\n", maximum - minimum);
    return 0;
}
