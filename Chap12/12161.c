// https://jungol.co.kr/problem/12161
#include <stdio.h>
#include <math.h>

struct Body {
    int height;
    double weight;
};

struct Body makeStudent(struct Body father, struct Body mother)
{
    const double weight = (father.weight + mother.weight) / 2 - 4.5;
    const struct Body student = {
        (father.height + mother.height) / 2 + 5,
        round(weight * 10) / 10
    };
    return student;
}

int main(void)
{
    struct Body father, mother;
    scanf("%d %lf", &father.height, &father.weight);
    scanf("%d %lf", &mother.height, &mother.weight);

    const struct Body student = makeStudent(father, mother);
    printf("height : %dcm\nweight : %.1fkg\n", student.height, student.weight);
    return 0;
}
