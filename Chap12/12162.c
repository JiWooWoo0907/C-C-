// https://jungol.co.kr/problem/12162
#include <stdio.h>

struct Student {
    char name[21];
    int score[3];
    int total;
};

void input(struct Student students[], int n)
{
    for (int i = 0; i < n; ++i) {
        struct Student *student = &students[i];
        scanf("%20s %d %d %d", student->name,
              &student->score[0], &student->score[1], &student->score[2]);
        student->total = student->score[0] + student->score[1] + student->score[2];
    }
}

void sort(struct Student students[], int n)
{
    for (int i = 1; i < n; ++i) {
        struct Student student = students[i];
        int j = i;
        while (j > 0 && students[j - 1].total < student.total) {
            students[j] = students[j - 1];
            --j;
        }
        students[j] = student;
    }
}

void output(const struct Student students[], int n)
{
    for (int i = 0; i < n; ++i) {
        const struct Student *student = &students[i];
        printf("%s %d %d %d %d\n", student->name, student->score[0],
               student->score[1], student->score[2], student->total);
    }
}

int main(void)
{
    int n;
    struct Student students[10];
    scanf("%d", &n);
    input(students, n);
    sort(students, n);
    output(students, n);
    return 0;
}
