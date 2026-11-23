// https://jungol.co.kr/problem/12160
#include <stdio.h>

struct Rectangle {
    int x1;
    int y1;
    int x2;
    int y2;
};

int main(void)
{
    struct Rectangle a, b;
    scanf("%d %d %d %d", &a.x1, &a.y1, &a.x2, &a.y2);
    scanf("%d %d %d %d", &b.x1, &b.y1, &b.x2, &b.y2);

    const struct Rectangle bounds = {
        a.x1 < b.x1 ? a.x1 : b.x1,
        a.y1 < b.y1 ? a.y1 : b.y1,
        a.x2 > b.x2 ? a.x2 : b.x2,
        a.y2 > b.y2 ? a.y2 : b.y2
    };
    printf("%d %d %d %d\n", bounds.x1, bounds.y1, bounds.x2, bounds.y2);
    return 0;
}
