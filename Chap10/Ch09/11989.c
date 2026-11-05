#include <stdio.h>

int main(void)
{
    int sequence[100];
    int n;
    int count = 2;

    scanf("%d", &n);
    sequence[0] = 100;
    sequence[1] = n;

    while (count < 100) {
        sequence[count] = sequence[count - 2] - sequence[count - 1];
        if (sequence[count] < 0) {
            count++;
            break;
        }
        count++;
    }

    for (int i = 0; i < count; i++) {
        printf("%d%s", sequence[i], i == count - 1 ? "\n" : " ");
    }
    return 0;
}
