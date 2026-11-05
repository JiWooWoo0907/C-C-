#include <stdio.h>

int main()
{
    // 증가
    for (int i = 1; i <= 3; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("*"); 
        }
        printf("\n"); 
    }

    // 감소
    for (int i = 3; i > 0; i--) 
    {
        for (int j = 0; j < i; j++)  
        {
            printf("*"); 
        }
        printf("\n"); 
    }

    return 0;
}