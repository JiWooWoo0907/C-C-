// https://jungol.co.kr/problem/12148
#include <stdio.h>

struct Person {
    char name[256];
    int age;
};

int main(void)
{
    const struct Person self = {"Yejun", 12};
    struct Person friend;
    scanf("%255s %d", friend.name, &friend.age);
    printf("Your name: %s, age: %d\n", self.name, self.age);
    printf("Friend's name: %s, age: %d\n", friend.name, friend.age);
    return 0;
}
