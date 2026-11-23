// https://jungol.co.kr/problem/12152
#include <stdio.h>

struct Person {
    char name[256];
    int score;
};

int main(void)
{
    struct Person people[5];
    int best = 0;
    for (int i = 0; i < 5; ++i) {
        scanf("%255s %d", people[i].name, &people[i].score);
        if (people[i].score > people[best].score) {
            best = i;
        }
    }
    printf("%s %d\n", people[best].name, people[best].score);
    return 0;
}
