#include <stdio.h>

int main(void)
{
    int numbers[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i += 2) {
        sum += numbers[i];
    }

    printf("%d\n", sum);
    return 0;
}
