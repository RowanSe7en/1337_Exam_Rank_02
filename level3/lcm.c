#include <stdio.h>


unsigned int	lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return 0;

    unsigned int div = 2;

    while (1)
    {
        if (a % div == 0 && b % div == 0)
            return div;
        else if (div > a || div > b)
            return 1;
        div++;
    }
    
    
}

int	main(void)
{
	printf("%d\n", lcm(42, 15));
	return (0);
}