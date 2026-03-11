#include <stdio.h>
#include <stdlib.h>

int l(int nbr)
{
	int len = 0;
	if (nbr < 0)
	{
		len = 1;
		nbr *= -1;
	}
	if (nbr >= 0 && nbr <= 9)
		return len += 1;
	
	while (nbr > 0)
	{
		len++;
		nbr /= 10;
	}
	return len;
	
	
}

char	*ft_itoa(int nbr)
{
	if (nbr == -2147483648)
		return "-2147483648";

	int len = l(nbr);
	char *n = malloc(len + 1);
	int b = 1;

	n[--len] = '\0';
	if (nbr < 0)
	{
		n[0] = '-';
		nbr *= -1;
		b = 0;
	}
	// printf("%d", len);
	while (len > 0)
	{
		n[len] = (nbr % 10) + 48;
		nbr /= 10;
		len--;
	}
	if (b)
	{
		n[len] = (nbr % 10) + 48;
	}
	
	return n;
	
}

int main(int c, char **v)
{
	printf("%s", ft_itoa(-1));
	printf("\n");
}