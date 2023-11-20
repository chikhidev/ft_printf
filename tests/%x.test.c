#include "test.h"

void	run_mandatory_tests(void)
{
	int f_len, o_len;
	// Test Case 1
	f_len = ft_printf("1.\t%x\n", 123);
	o_len = printf("1.\t%x\n", 123);
	printf("---------------------------\n");
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
	if (f_len == o_len)
		printf(ANSI_COLOR_GREEN "Passed\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "Failed\n" ANSI_COLOR_RESET);
	printf("---------------------------\n");
	// Test Case 2
	f_len = ft_printf("2.\t%x\n", 9879);
	o_len = printf("2.\t%x\n", 9879);
	printf("---------------------------\n");
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
	if (f_len == o_len)
		printf(ANSI_COLOR_GREEN "Passed\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "Failed\n" ANSI_COLOR_RESET);
	printf("---------------------------\n");

	// Add more mandatory test cases...
}

void	run_bonus_tests(void)
{
	int f_len, o_len;
	// Bonus Test Case 1
	f_len = ft_printf("1.\t%-10x\n", 12345);
	o_len = printf("1.\t%-10x\n", 12345);
	printf("---------------------------\n");
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
	if (f_len == o_len)
		printf(ANSI_COLOR_GREEN "Passed\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "Failed\n" ANSI_COLOR_RESET);
	printf("---------------------------\n");
	// Bonus Test Case 2
	f_len = ft_printf("2.\t%#x\n", 42);
	o_len = printf("2.\t%#x\n", 42);
	printf("---------------------------\n");
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
	if (f_len == o_len)
		printf(ANSI_COLOR_GREEN "Passed\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "Failed\n" ANSI_COLOR_RESET);
	printf("---------------------------\n");
	// Bonus Test Case 3
	f_len = ft_printf("3.\t%+x\n", 987);
	o_len = printf("3.\t%+x\n", 987);
	printf("---------------------------\n");
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
	if (f_len == o_len)
		printf(ANSI_COLOR_GREEN "Passed\n" ANSI_COLOR_RESET);
	else
		printf(ANSI_COLOR_RED "Failed\n" ANSI_COLOR_RESET);
	printf("---------------------------\n");
	// Add more bonus test cases...
}

int	main(void)
{
	run_mandatory_tests();
    // run_bonus_tests();
	return (0);
}
