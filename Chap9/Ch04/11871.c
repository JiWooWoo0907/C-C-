#include <stdio.h>
int main(void)
{
    int first, second;
    scanf("%d %d", &first, &second);
    if (first >= 4 && second >= 4) {
        puts("WIN.");
    } else if (first >= 4 || second >= 4) {
        puts("DRAW.");
    } else {
        puts("LOSE.");
    }
    return 0;
}
