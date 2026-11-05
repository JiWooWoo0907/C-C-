#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int answer;
    int num;
    int count=0;
    
    srand(time(NULL));

    answer = rand() % 100 + 1;

    printf("find the number between 1 to 100!\n");

    while(1)
    {
        printf("enter the number : \n");
        scanf("%d", &num);
        count++;

        if(num > answer) {
            printf("less.\n");
        }
        else if(num < answer) {
            printf("more.\n");
        }
        else {
            printf("correct.\n");
            printf("you corrected in %d times.\n", count);
            break;
        }
    }

    return 0;
}