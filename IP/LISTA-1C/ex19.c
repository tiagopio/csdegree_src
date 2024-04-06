#include <stdio.h>
 
int main()
{   
    int h;
    
    scanf("%d", &h);
 
    int c = 1;
    while (c <= h)
    {
        int a = 1;
        for (a; a < h; a++)
        {  
            int b = 2;
            for (b; b < h; b++)
            {   
                if (c * c == (a * a) + (b * b) && a < b)
                    printf("hipotenusa = %d, catetos %d e %d\n", c, a, b);
            }            
        }
        c++;
    }
    
 
    return 0;
}