#include <stdio.h>

int main(void)
{
    int n;
    int numbers[100];
    int maximum;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    maximum = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }
    }
    printf("%d\n", maximum);
    return 0;
}
