int	    is_power_of_2(unsigned int n)
{
    int i = 0;

    while (i * i <= n)
    {
        if (i * i == n)
        {
           return 1;
        }
        i++;
    }
    return 0;
    
}
#include <stdio.h>

int main()
{
    printf("%d\n", is_power_of_2(1));
    printf("%d\n", is_power_of_2(25));
    printf("%d\n", is_power_of_2(16));
    printf("%d\n", is_power_of_2(4));
    printf("%d\n", is_power_of_2(5));
    printf("%d\n", is_power_of_2(7));
    printf("%d\n", is_power_of_2(9));
}