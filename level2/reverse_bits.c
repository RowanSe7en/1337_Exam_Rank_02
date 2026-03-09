#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				i;

	i = 8;
	result = 0;
	while (i-- > 0)
	{
		result = result * 2 + (octet % 2);
		octet = octet / 2;
	}
	return (result);
}

// void	print_bits(unsigned char octet)
// {
// 	int	i = 8;
// 	char bit;

// 	while (i--)
// 	{
// 		bit = ((octet >> i) & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// }

// int	main(void)
// {
// 	unsigned char a = 38; // 00100110
// 	unsigned char b;

// 	print_bits(a);
// 	printf("%d\n", a);
// 	write(1, "\n", 1);

// 	b = reverse_bits(a);

// 	print_bits(b);
// 	printf("%d\n", b);

// 	write(1, "\n", 1);
// }