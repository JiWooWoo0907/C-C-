#include <stdio.h>
int main(void)
{
    int num = 1, sum = 0;
    while (num <= 10) sum += num++;
    printf("sum = %d\\nnum = %d\\n", sum, num);
    return 0;
}
