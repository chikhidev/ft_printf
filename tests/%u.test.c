#include "test.h"

int	main(void)
{
	int	f_len;
	int	o_len;

	o_len = printf("1.\t%u\n", -55);
	f_len = ft_printf("2.\t%u\n", -55);
	printf("---------------------------\n");
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
	if (f_len == o_len)
		printf(ANSI_COLOR_GREEN "Passed\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "Failed\n" ANSI_COLOR_RESET);
	return (0);
}
