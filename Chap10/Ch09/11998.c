#include <stdio.h>

int main(void)
{
    int counts[7] = {0};
    int roll;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &roll);
        counts[roll]++;
    }

    for (int face = 1; face <= 6; face++) {
        printf("%d : %d\n", face, counts[face]);
    }
    return 0;
}
