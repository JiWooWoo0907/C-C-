#include <stdio.h>

int main(void)
{
    int values[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d%s", values[i], i == 4 ? "\n" : " ");
    }
    return 0;
}
