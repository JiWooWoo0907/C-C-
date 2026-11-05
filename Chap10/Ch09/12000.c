#include <stdio.h>

int main(void)
{
    int values[10];

    scanf("%d %d", &values[0], &values[1]);
    for (int i = 2; i < 10; i++) {
        values[i] = (values[i - 2] + values[i - 1]) % 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d%s", values[i], i == 9 ? "\n" : " ");
    }
    return 0;
}
