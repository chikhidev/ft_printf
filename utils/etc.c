#include "../ft_printf.h"

int	ft_strlen2(char *ptr)
{
	int	counter;

	if (ptr == NULL)
		return (0);
	counter = 0;
	while (*(ptr + counter))
		counter++;
	return (counter);
}
