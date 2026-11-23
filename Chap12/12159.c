// https://jungol.co.kr/problem/12159
#include <stdio.h>
#include <string.h>

struct Contact {
    char name[101];
    char tel[101];
    char addr[101];
};

int main(void)
{
    struct Contact people[3];
    int first = 0;
    for (int i = 0; i < 3; ++i) {
        scanf("%100s %100s %100s", people[i].name, people[i].tel, people[i].addr);
        if (strcmp(people[i].name, people[first].name) < 0) {
            first = i;
        }
    }

    const struct Contact person = people[first];
    printf("name : %s\ntel : %s\naddr : %s\n", person.name, person.tel, person.addr);
    return 0;
}
