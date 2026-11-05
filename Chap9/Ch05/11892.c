#include <stdio.h>
int main(void)
{
    int number;
    while (scanf("%d", &number) == 1 && number != 0)
        puts(number > 0 ? "positive number" : "negative number");
    return 0;
}
