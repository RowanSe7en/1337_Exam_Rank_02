#include <unistd.h>
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
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

// 	b = swap_bits(a);

// 	print_bits(b);
// 	printf("%d\n", b);

// 	write(1, "\n", 1);
// }