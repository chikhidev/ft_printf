#ifndef TEST_H
# define TEST_H

# include "../ft_printf.h"
# include <stdio.h>
#include <limits.h>
#include <stdbool.h>

# define ANSI_COLOR_RED "\x1b[31m"
# define ANSI_COLOR_GREEN "\x1b[32m"
# define ANSI_COLOR_RESET "\x1b[0m"

bool compare_results(int len1, int len2);
void print_result(bool passed);

#endif