#include <stdio.h>

int main(void)
{
    const double averages[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int first, second;

    scanf("%d %d", &first, &second);
    printf("%.1f\n", averages[first - 1] + averages[second - 1]);
    return 0;
}
