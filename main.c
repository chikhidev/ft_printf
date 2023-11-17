#include "libftprintf.h"
#include <stdio.h>

int main ()
{
	int f_len;
	int o_len;

	f_len = ft_printf("hello there this is %c\n", 'h');
	o_len = printf("hello there this is %c\n", 'h');
	printf("got len = %d\n", f_len);
	printf("exp len = %d\n", o_len);
}
