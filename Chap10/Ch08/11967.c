#include <stdio.h>

int main(void)
{
    int numbers[100];
    int count = 0;

    while (count < 100 && scanf("%d", &numbers[count]) == 1 && numbers[count] != 0) {
        count++;
    }

    for (int i = 1; i < count; i += 2) {
        printf("%d%s", numbers[i], i + 2 >= count ? "\n" : " ");
    }
    return 0;
}
