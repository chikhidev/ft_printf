#include "libftprintf.h"

void	switcher(const char *str, va_list params, int *i, int *len)
{
	*i += 1;
	if (str[*i] == 'c')
		*len += ft_lputchar(va_arg(params, int));
	else if (str[*i] == 's')
		*len += ft_lputstr(va_arg(params, char *));
	else if (str[*i] == 'p')
		*len += ft_print_mem(va_arg(params, void *));
	else
	{
		ft_lputchar(str[--*i]);
		ft_lputchar(str[++*i]);
		*len += 2;
	}
}

int	manage_args(const char *str, va_list params)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
			switcher(str, params, &i, &len);
		else
			len += ft_lputchar(str[i]);
		i++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	params;

	va_start(params, format);
	len = manage_args(format, params);
	va_end(params);
	return (len);
}
