#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);    // 배열 크기 N 입력

    int A[20] = {};     // 최대 크기 20으로 선언, 초기화
    int B[20] = {};     // 최대 크기 20으로 선언, 초기화

    int *p1 = A;         // 포인터 p1를 배열 A의 시작에 연결
    int *p2 = B;         // 포인터 p2를 배열 B의 시작에 연결

    for (int *p1 = A; p1 < A + N; p1++)  // 포인터로 배열A 순회하며 입력
        scanf("%d", p1);                 // 지금 가리키는 칸에 직접 저장

    for (int *p2 = B; p2 < B + N; p2++)  // 포인터로 배열B 순회하며 입력
        scanf("%d", p2);

    for (int i = 0; i < N; i++)
        printf(" %d", *(p1 + i) + *(p2 + (N - 1 - i))); // B는 역순으로 더하기

    printf("\n");

    return 0;
}
