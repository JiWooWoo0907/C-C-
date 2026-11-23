// https://jungol.co.kr/problem/12146
#include <stdio.h>

struct Person {
    char name[256];
    int age;
};

int main(void)
{
    struct Person person;
    scanf("%255s %d", person.name, &person.age);
    printf("Your name is %s and you are %d years old.\n", person.name, person.age);
    return 0;
}
