#include "test.h"

int	main(void)
{
	int		f_len;
	int		o_len;
	char	*value;
	char	*ptr;

	value = "ertery";
	ptr = value;
	f_len = ft_printf("2.\t%p\n", NULL);
	o_len = printf("1.\t%p\n", NULL);
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
	return (0);
}
