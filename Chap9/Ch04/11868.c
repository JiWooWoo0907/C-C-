#include <stdio.h>
int main(void)
{
    int age;
    scanf("%d", &age);
    if (age >= 20) {
        puts("adult");
    } else {
        printf("%d years later\\n", 20 - age);
    }
    return 0;
}
