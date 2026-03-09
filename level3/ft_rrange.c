#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int size = abs(end - start) + 1;
    int *range = malloc(sizeof(int) * size);
    
    int i = 0;
    while (i < size)
    {
        if (start >= end)
            range[i++] = end++;
        else if (start <= end)
            range[i++] = end--;
        
    }
    return range;
    
}

int main(void)
{

    int * arr = ft_rrange(1, 3);

    for (int i = 0; i < 3; i++){
        printf("%d, ", arr[i]);
    }
}