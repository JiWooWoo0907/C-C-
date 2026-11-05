#include <stdio.h>

void bubblesortAscending(int arr[], int n) // 배열을 오름차순으로 정렬하는 함수
{
    for (int i=0; i < n-1; i++) // 정렬을 위한 전체 반복을 관리하는 for문
    {
        for (int j = 0; j < n - 1; j++) // 항목을 비교하고 교환하는 for문
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j]; // ┐
                arr[j] = arr[j+1]; // | -> 변수의 스왑 기법을 이용한 값 교환
                arr[j+1] = temp;   // ┘
            }
        }
    }
}

int main()

{
    int arr[] = {7, 4, 5, 1, 3}; // 정렬할 배열 선언 및 초기화
    int n = sizeof(arr) / sizeof(arr[0]); // 배열의 크기 계산

    printf("초기 상태 배열 : [ ");
    for (int i=0; i<n; i++) // 초기 배열 출력
    {
        printf("%d ", arr[i]);
    }
    printf(" ] \n");

    bubblesortAscending(arr, n); // 오름차순 정렬 함수 호출
    printf("정렬된 배열 : [ ");
    for (int i=0; i<n; i++) // 정렬된 배열 출력
    {
        printf("%d ", arr[i]);
    }
    printf(" ] \n");

    return 0; // 프로그램 종료
}