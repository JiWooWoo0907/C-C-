#include <stdio.h>

int main(void)
{
    int scores[5][4];

    for (int student = 0; student < 5; student++) {
        int total = 0;
        for (int subject = 0; subject < 4; subject++) {
            scanf("%d", &scores[student][subject]);
            total += scores[student][subject];
        }
        printf("%d %.1f\n", total, total / 4.0);
    }
    return 0;
}
