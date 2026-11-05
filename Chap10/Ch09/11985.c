#include <stdio.h>

int main(void)
{
    int counts[26] = {0};
    char letter;

    while (scanf(" %c", &letter) == 1 && letter >= 'A' && letter <= 'Z') {
        counts[letter - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("%c : %d\n", 'A' + i, counts[i]);
        }
    }
    return 0;
}
