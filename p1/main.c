#include <stdio.h>

int main(void) 
{
    char x[10] = {};
    char *px = x;               // 포인터 px를 배열 x의 시작에 연결

    for (char *p = px; p < px + 10; p++)    // 포인터로 한 칸씩 이동하며 문자 하나씩 직접 입력받아 저장
        scanf("%c", p);
    
    char maxChar = *px;         // 최빈 문자 (첫 번째 문자로 초기화)
    int maxCount = 0;          // 최대 빈도수
    
    for (char *p = px; p < px + 10; p++)        // p: 비교 기준 문자 순회
    {
        int count = 0;
        
        for (char *q = px; q < px + 10; q++)    // q: 배열 전체 탐색하며 *p 개수 카운트
        {
            if (*p == *q) 
            {
                count++;
            }
        }
        
        if (count > maxCount)   // count가 maxCount 초과할 때만 갱신
        {
            maxCount = count;
            maxChar  = *p;
        }
    }
    
    printf("%c %d\n", maxChar, maxCount);
    
    return 0;
}
