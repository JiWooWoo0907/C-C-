#include <stdio.h>

int main(void)
{
    int numbers[100];
    int count = 0;

    while (count < 100 && scanf("%d", &numbers[count]) == 1 && numbers[count] != 0) {
        count++;
    }

    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        int result = numbers[i] % 2 == 0 ? numbers[i] / 2 : numbers[i] * 2;
        printf("%d%s", result, i == count - 1 ? "\n" : " ");
    }
    return 0;
}
