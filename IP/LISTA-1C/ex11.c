#include <stdio.h>
 
int main()
{
    int elements;
 
    scanf("%d", &elements);
 
    int sequence_arr[elements];
    
    int i = 0;
    for (i; i < elements; i++)
        scanf("%d", &sequence_arr[i]);
 
    int current_length = 0, final_length = 0;
 
    i = 1;
    while (i < elements)
    {
        if (sequence_arr[i] > sequence_arr[i - 1])
            current_length++;
        else {
            if (current_length > final_length)
                final_length = current_length;
            current_length = 0;
        }
        i++;
    }
 
    if (current_length > final_length)
        final_length = current_length;
 
 
    printf("O comprimento do segmento crescente maximo e: %d\n", final_length);
 
    return 0;
}