#include <stdio.h>

int main(void)
{
    int numbers[10];

    for (int i = 0; i < 10; i++) {
        numbers[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d%s", numbers[i], i == 9 ? "\n" : " ");
    }
    return 0;
}
