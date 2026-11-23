// https://jungol.co.kr/problem/12157
#include <stdio.h>

struct Score {
    char name[20];
    int kor;
    int eng;
};

struct Score plus(struct Score a, struct Score b)
{
    const struct Score total = {"Total", a.kor + b.kor, a.eng + b.eng};
    return total;
}

int main(void)
{
    struct Score a, b;
    scanf("%19s %d %d", a.name, &a.kor, &a.eng);
    scanf("%19s %d %d", b.name, &b.kor, &b.eng);

    const struct Score result = plus(a, b);
    printf("%s %d %d\n", a.name, a.kor, a.eng);
    printf("%s %d %d\n", b.name, b.kor, b.eng);
    printf("%s %d %d\n", result.name, result.kor, result.eng);
    return 0;
}
