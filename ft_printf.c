#include "libftprintf.h"

void	switcher(char *str, int *i, int *len)
{
	*i += 1;
	if (str[*i] == 'c')
		ft_lputchar(va_arg(params, int));
	else if (str[*i] == 's')
		*len += (ft_lputstr(va_arg(params, char *)) - 1);
	//else if (str[i] == 'p')
	//	ft_printhex(va_arg(params, void *);
	else
	{
		ft_lputchar(str[--*i]);
		ft_lputchar(str[++*i]);
	}
}

int	manage_args(const char *str, va_list  params)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
			switcher(str, &i, &len);
		else
			ft_lputchar(str[i]);
		i++;
	}
	return (i + len);
}

int	ft_printf(const char *format, ...)
{
	int			len;
	va_list		params;

	va_start(params, format);
	len = manage_args(format, params);
	va_end(params);
	return (len);
}
