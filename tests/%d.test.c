// :Stdh
// :Stdh -
#include "test.h"

int	main(void)
{
	int	f_len;
	int	o_len;

	f_len = ft_printf("1.\t%d\n", 123);
	o_len = printf("1.\t%d\n", 123);
	printf("---------------------------\n");
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
	if (f_len == o_len)
		printf(ANSI_COLOR_GREEN "Passed\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "Failed\n" ANSI_COLOR_RESET);
	printf("---------------------------\n");
	f_len = ft_printf("2.\t%d\n", -9879);
	o_len = printf("2.\t%d\n", -9879);
	printf("---------------------------\n");
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
	if (f_len == o_len)
		printf(ANSI_COLOR_GREEN "Passed\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "Failed\n" ANSI_COLOR_RESET);
	printf("---------------------------\n");
	f_len = ft_printf("3.\t%05d\n", 42);
	o_len = printf("3.\t%05d\n", 42);
	printf("---------------------------\n");
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
	if (f_len == o_len)
		printf(ANSI_COLOR_GREEN "Passed\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "Failed\n" ANSI_COLOR_RESET);
	printf("---------------------------\n");
	f_len = ft_printf("4.\t%-10d\n", 12345);
	o_len = printf("4.\t%-10d\n", 12345);
	printf("---------------------------\n");
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
	if (f_len == o_len)
		printf(ANSI_COLOR_GREEN "Passed\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "Failed\n" ANSI_COLOR_RESET);
	printf("---------------------------\n");
	f_len = ft_printf("5.\t%.3d\n", 987654);
	o_len = printf("5.\t%.3d\n", 987654);
	printf("---------------------------\n");
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
	if (f_len == o_len)
		printf(ANSI_COLOR_GREEN "Passed\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "Failed\n" ANSI_COLOR_RESET);
	printf("---------------------------\n");
	f_len = ft_printf("6.\t%20d\n", -123);
	o_len = printf("6.\t%20d\n", -123);
	printf("---------------------------\n");
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
	if (f_len == o_len)
		printf(ANSI_COLOR_GREEN "Passed\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "Failed\n" ANSI_COLOR_RESET);
	printf("---------------------------\n");
	return (0);
}
