#include <stdio.h>
 
int main()
{
    int n;
 
    scanf("%d", &n);
 
    if (n < 0) 
        return 0;
 
    int i = 1;
    for (i; i <= n; i++)
    {  
        printf("%d*%d*%d = ", i, i, i); 
        int c = i * (i - 1);
        for (c; c < i * (i + 1); c++)
        {   
            if (c % 2 != 0)
                printf("%d", c);
            if (c != i * (i - 1) && c % 2 == 0)
                printf("+");
        }   
        printf("\n");
    }
 
    return 0;
}