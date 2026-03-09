#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_prime(int nb)
{
    if (nb <= 1)
        return 0;

    int i = 2;
    
    while (i <= (nb / 2))
    {
        if (!(nb % i))
            return 0;
        i++;

    }
    
    
}

int main(int c, char **v)
{
    if (c == 2)
    {
        int nb = atoi(v[1]);
        int sum = 0;

        while (nb > 0)
        {
            if (is_prime(nb))
                sum += nb;
            nb--;
        }       
        printf("%d", sum);
    }
    write(1, "\n", 1);
    
}