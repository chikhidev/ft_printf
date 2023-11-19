#include "../ft_printf.h"

static int	hex_converter(unsigned char to_convert, int to_upper)
{
	const char	*base = "0123456789abcdef";

	return (ft_lputchar(base[to_convert] - (to_upper * 32)));
}

int	ft_print_hex(uintptr_t address, int first_call)
{
	int			len;
	uintptr_t	holder;

	len = 0;
	if (first_call)
		len += ft_lputstr("0x");
	if (address > 1)
		len += ft_print_hex(address / 16, 0);
	len += hex_converter(address % 16, 0);
	return (len);
}
