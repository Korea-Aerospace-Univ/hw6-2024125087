#include <stdio.h>

int main(void) 
{
    char x[10] = {};
    char *px = x;               

    for (char *p = px; p < px + 10; p++)    
        scanf("%c", p);
    
    char maxChar = *px;        
    int  maxCount = 0;          
    
    for (char *p = px; p < px + 10; p++)       
    {
        int count = 0;
        
        for (char *q = px; q < px + 10; q++)  
        {
            if (*p == *q)
                count++;
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
    
    printf("%c %d\n", maxChar, maxCount);
    
    return 0;
}
