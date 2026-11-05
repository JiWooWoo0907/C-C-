#include <stdio.h>
int main(void)
{
    int score;
    scanf("%d", &score);
    if (score >= 80) {
        puts("Passed.");
    } else {
        puts("Failed.");
    }
    return 0;
}
