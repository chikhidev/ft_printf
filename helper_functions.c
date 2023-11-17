#include "libftprintf.h"

int	ft_lputchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_lputstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_lputchar(str[i++]);
	return (i);
}
