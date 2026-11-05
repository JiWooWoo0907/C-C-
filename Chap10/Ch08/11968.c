#include <stdio.h>

int main(void)
{
    int numbers[100];
    int count = 0;

    while (count < 100 && scanf("%d", &numbers[count]) == 1 && numbers[count] != 0) {
        count++;
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%d%s", numbers[i], i == 0 ? "\n" : " ");
    }
    return 0;
}
