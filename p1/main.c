#include <stdio.h>

int main(void) 
{
    char x[10] = {}; // 배열선언, 초기화
    
    scanf("%s", x); // 영문자를 입력받아 배열 x에 저장

    char maxChar = x[0]; // 변수 선언, 초기화
    int  maxCount = 0;  // 변수 선언, 초기화
    
    for (char *p = x; p < x + 10; p++) 
    {
        int count = 0;
        
        for (char *q = x; q < x + 10; q++) 
        {
            if (*p == *q)
                count++;
        }
        
        if (count > maxCount) 
        {
            maxCount = count;
            maxChar  = *p;
        }
    }
    
    printf("%c %d\n", maxChar, maxCount);
    
    return 0;
}
