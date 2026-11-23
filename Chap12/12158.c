// https://jungol.co.kr/problem/12158
#include <stdio.h>

struct Contact {
    char name[101];
    char tel[101];
    char addr[101];
};

int main(void)
{
    struct Contact person;
    scanf("%100s %100s %100s", person.name, person.tel, person.addr);
    printf("name : %s\ntel : %s\naddr : %s\n", person.name, person.tel, person.addr);
    return 0;
}
