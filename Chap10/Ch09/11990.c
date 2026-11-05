#include <stdio.h>

int main(void)
{
    int numbers[5] = {95, 75, 85, 100, 50};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d%s", numbers[i], i == 4 ? "\n" : " ");
    }
    return 0;
}
