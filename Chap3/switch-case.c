#include <stdio.h>

int main(void) {

    int outcome;
    char grade;

    printf("What's your grade : ");
    scanf("%d", &outcome);

    switch(outcome % 10) {
        case 10:
            grade = 'A';
            break;
        case 9:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 5:
            grade = 'E';
            break;
        case 4:
            grade = 'F';
            break;
        
    }

    printf("Your grade is %c", grade);

    return 0;
}