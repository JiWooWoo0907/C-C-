#include <stdio.h>

int main(void)
{
    int total = 0;

    for (int classNumber = 0; classNumber < 4; classNumber++) {
        int classTotal = 0;
        for (int student = 0; student < 3; student++) {
            int kicks;
            scanf("%d", &kicks);
            classTotal += kicks;
        }
        printf("%d\n", classTotal);
        total += classTotal;
    }
    printf("%d\n", total);
    return 0;
}
