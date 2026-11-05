#include <stdio.h>

int main(void)
{
    int numbers[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (numbers[j] < numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d%s", numbers[i], i == 9 ? "\n" : " ");
    }
    return 0;
}
