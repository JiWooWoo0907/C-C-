#include <stdio.h>

int main(void)
{
    char letters[10];

    for (int i = 0; i < 10; i++) {
        scanf(" %c", &letters[i]);
    }

    for (int i = 9; i >= 0; i--) {
        printf("%c%s", letters[i], i == 0 ? "\n" : " ");
    }
    return 0;
}
