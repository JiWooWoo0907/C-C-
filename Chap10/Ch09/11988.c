#include <stdio.h>

int main(void)
{
    int fib[20] = {1, 1};

    for (int i = 2; i < 20; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i < 20; i++) {
        printf("%d%s", fib[i], i == 19 ? "\n" : " ");
    }
    return 0;
}
