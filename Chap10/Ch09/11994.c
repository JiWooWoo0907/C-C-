#include <stdio.h>

int main(void)
{
    int scores[3][3];
    int subjectTotals[3] = {0};

    for (int student = 0; student < 3; student++) {
        for (int subject = 0; subject < 3; subject++) {
            scanf("%d", &scores[student][subject]);
        }
    }

    for (int student = 0; student < 3; student++) {
        int total = 0;
        for (int subject = 0; subject < 3; subject++) {
            total += scores[student][subject];
            subjectTotals[subject] += scores[student][subject];
            printf("%d ", scores[student][subject]);
        }
        printf("%d\n", total);
    }

    int grandTotal = 0;
    for (int subject = 0; subject < 3; subject++) {
        printf("%d ", subjectTotals[subject]);
        grandTotal += subjectTotals[subject];
    }
    printf("%d\n", grandTotal);
    return 0;
}
