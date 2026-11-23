// https://jungol.co.kr/problem/12156
#include <stdio.h>

struct Point {
    double x;
    double y;
};

int main(void)
{
    struct Point a, b;
    scanf("%lf %lf", &a.x, &a.y);
    scanf("%lf %lf", &b.x, &b.y);
    const struct Point center = {(a.x + b.x) / 2, (a.y + b.y) / 2};
    printf("Center point = (%.1f, %.1f)\n", center.x, center.y);
    return 0;
}
