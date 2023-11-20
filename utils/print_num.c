#include "../ft_printf.h"

static void	ft_putnbr_rec(int n, int *len)
{
	if (n >= 10)
		ft_putnbr_rec(n / 10, len);
	*len += ft_lputchar(n % 10 + '0');
}

static void	ft_putnbr_un_rec(unsigned int n, int *len)
{
	if (n >= 10)
		ft_putnbr_un_rec(n / 10, len);
	*len += ft_lputchar(n % 10 + '0');
}

int	ft_print_dig(int digit)
{
	int	len;

	len = 0;
	ft_putnbr_rec(digit, &len);
	return (len);
}

int	ft_print_uns(unsigned int digit)
{
	int	len;

	len = 0;
	ft_putnbr_un_rec(digit, &len);
	return (len);
}
