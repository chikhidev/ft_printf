#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int		f_len;
	int		o_len;
	char	*value;
	char	*ptr;

	value = "ddd";
	ptr = value;                               // Corrected assignment
	f_len = ft_printf("2.\t%p\n", (void*)-5);  // Corrected format specifier
	o_len = printf("1.\t%p\n", (void*)-5); // Corrected format specifier
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
	return (0);
}

