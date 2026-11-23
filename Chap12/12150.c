// https://jungol.co.kr/problem/12150
#include <stdio.h>

struct Person {
    char name[21];
    int age;
};

int main(void)
{
    struct Person people[3];
    for (int i = 0; i < 3; ++i) {
        scanf("%20s %d", people[i].name, &people[i].age);
    }
    for (int i = 0; i < 3; ++i) {
        printf("Name : %s\nAge  : %d\n", people[i].name, people[i].age);
    }
    return 0;
}
