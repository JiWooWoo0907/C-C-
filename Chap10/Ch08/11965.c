#include <stdio.h>

int main(void)
{
    char alphabet[26];

    for (int i = 0; i < 26; i++) {
        alphabet[i] = (char)('A' + i);
    }

    for (int i = 25; i >= 0; i--) {
        printf("%c%s", alphabet[i], i == 0 ? "\n" : " ");
    }
    return 0;
}
