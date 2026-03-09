#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int size = abs(end - start) + 1;
    int *range = malloc(sizeof(int) * size);
    
    int i = 0;
    while (i < size)
    {
        if (start >= end)
            range[i++] = start--;
        else if (start <= end)
            range[i++] = start++;
        
    }
    return range;
    
}

int main(void)
{

    int * arr = ft_range(1, 3);

    for (int i = 0; i < 3; i++){
        printf("%d, ", arr[i]);
    }
}