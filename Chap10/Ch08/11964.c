#include <stdio.h>

int main(void)
{
    char letters[10];

    for (int i = 0; i < 10; i++) {
        scanf(" %c", &letters[i]);
    }

    for (int i = 0; i < 10; i++) {
        putchar(letters[i]);
    }
    putchar('\n');
    return 0;
}
