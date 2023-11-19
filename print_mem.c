#include "libftprintf.h"

static int	hex_converter(unsigned char to_convert, int to_upper)
{
	const char	*base = "0123456789abcdef";

	ft_lputchar(base[(to_convert >> 4) & 0xF]);
	ft_lputchar(base[to_convert & 0xF]);
	return (2);
}

// nibble
int	ft_print_mem(void *ptr)
{
	unsigned char	*address;
	int				i;
	int				size;
	int				len;

	if (ptr == NULL)
		return (ft_lputstr("0x0"));
	address = (unsigned char *)ptr;
	i = 0;
	size = sizeof(void *) - 1;
	len = ft_lputstr("0x");
	while (i < size)
	{
		printf("\npassed%d\n", i);
		len += hex_converter((unsigned char)address[i], 0);
		i++;
	}
	return (len);
}
