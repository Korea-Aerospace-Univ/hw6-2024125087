#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int A[20] = {};
    int B[20] = {};

    int *p1 = nullptr;
    int *p2 = nullptr; 

    for (int *p1 = A; p1 < A + N; p1++)
        scanf("%d", p1);

    for (int *p2 = B; p2 < B + N; p2++)
        scanf("%d", p2);

    for (p1 = A ,p2 = B + N -1; p1 < A + N; p1++, p2--)
        printf("%d ", *p1 + *p2);
    

    printf("\n");
    return 0;
}
