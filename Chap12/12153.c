// https://jungol.co.kr/problem/12153
#include <stdio.h>

struct Person {
    char name[21];
    int height;
};

int main(void)
{
    struct Person people[5];
    int best = 0;
    for (int i = 0; i < 5; ++i) {
        scanf("%20s %d", people[i].name, &people[i].height);
        if (people[i].height < people[best].height) {
            best = i;
        }
    }
    printf("%s %d\n", people[best].name, people[best].height);
    return 0;
}
