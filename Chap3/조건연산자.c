#include <stdio.h>

int main(void) {
    int number;
    scanf("%d", &number);
    
    printf("%s", (number % 2 == 0)?"Even":"Odd");
    return 0;
}