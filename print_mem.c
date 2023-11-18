#include "libftprintf.h"

static char	hex_converter(int to_convert)
{
	const char	base[] = "0123456789abcdef";

	return (base[to_convert]);
}

int	ft_print_mem(void *ptr, size_t size)
{
	size_t i;
	unsigned char *byte;
	int len_tracker;

	if (!ptr)
		return (ft_lputstr("0x0"));
	byte = (unsigned char *)ptr;
	i = size;
	len_tracker = ft_lputstr("0x");
	while (i > 0)
	{
		len_tracker += ft_lputchar(hex_converter(byte[i] >> 4));
		len_tracker += ft_lputchar(hex_converter(byte[i] & 0xf));
		i--;
	}
	return (len_tracker);
}