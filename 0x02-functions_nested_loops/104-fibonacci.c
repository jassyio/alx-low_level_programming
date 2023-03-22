#include <stdio.h>

int main(void)
{
    int n, first = 1, second = 2, next;
    
    printf("%d, %d", first, second);
    
    for (n = 3; n <= 98; n++)
    {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }
    
    printf("\n");
    
    return 0;
}
