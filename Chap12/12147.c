// https://jungol.co.kr/problem/12147
#include <stdio.h>

struct Student {
    char name[21];
    char school[21];
    int grade;
};

int main(void)
{
    struct Student student;
    scanf("%20s %20s %d", student.name, student.school, &student.grade);
    printf("Name : %s\nSchool : %s\nGrade : %d\n", student.name, student.school, student.grade);
    return 0;
}
