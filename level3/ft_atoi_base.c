int	ft_atoi_base(const char *str, int str_base)
{
    char base[] = "0123456789abcdef";
    int i = 0;
    int sign = 1;
    int res = 0;

    while (str[i])
    {
        if (str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
                sign *= -1;
            i++;
        }
        while (str[i] >= '0' && str[i] <= '9')
        {
            res = res * 10 + base[(str[i]) - 48] - 48;
            i++;
        }
        return res * sign;
        
    }
    
}
#include <stdio.h>

int main()
{
    printf("%d", ft_atoi_base("-1568", 10));
}