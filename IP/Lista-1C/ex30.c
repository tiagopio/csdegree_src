#include <stdio.h>
 
int main()
{
    int n;
    do {
        scanf("%d", &n);
        if (n <= 0)
            printf("Fatoracao nao e possivel para o numero %d!\n", n);
    } while (n <= 0);
 
 
    printf("%d =", n);
 
    int i = 2;
    for (i; i <= n; i++)
    {
        while (n % i == 0)
        {
            printf(" %d ", i);
            if (n != i)
                printf("x");
            n = n / i;
        }
    }
    printf("\n");
 
    return 0;
}