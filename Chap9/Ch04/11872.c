#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0) {
        puts("All Positive");
    } else if (a == 0 || b == 0 || c == 0) {
        puts("Contain Zero");
    } else {
        puts("Mixed");
    }
    return 0;
}
