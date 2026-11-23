// https://jungol.co.kr/problem/12155
#include <stdio.h>
#include <string.h>

struct Person {
    char name[256];
    int height;
    double weight;
};

int main(void)
{
    struct Person people[5];
    for (int i = 0; i < 5; ++i) {
        scanf("%255s %d %lf", people[i].name, &people[i].height, &people[i].weight);
    }

    for (int i = 1; i < 5; ++i) {
        struct Person person = people[i];
        int j = i;
        while (j > 0 && strcmp(people[j - 1].name, person.name) > 0) {
            people[j] = people[j - 1];
            --j;
        }
        people[j] = person;
    }

    for (int i = 0; i < 5; ++i) {
        printf("%s %d %.1f\n", people[i].name, people[i].height, people[i].weight);
    }
    return 0;
}
