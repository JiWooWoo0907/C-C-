#include <stdio.h>

int main(void)
{
    int month;

    while (scanf("%d", &month) == 1 && month >= 1 && month <= 12) {
        if (month == 2) {
            puts("28");
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            puts("30");
        } else {
            puts("31");
        }
    }
    return 0;
}
