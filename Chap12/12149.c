// https://jungol.co.kr/problem/12149
#include <stdio.h>

struct School {
    char name[31];
    int grade;
};

int main(void)
{
    const struct School elementary = {"Jejuelementary", 6};
    struct School next;
    scanf("%30s %d", next.name, &next.grade);
    printf("%d grade in %s School\n", elementary.grade, elementary.name);
    printf("%d grade in %s School\n", next.grade, next.name);
    return 0;
}
