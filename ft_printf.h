#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/*utils*/
int	ft_lputchar(int c);
int	ft_lputstr(char *str);
int	ft_print_mem(uintptr_t address);
int	ft_print_hex(uintptr_t address, int upper_case);
int	ft_print_dig(int digit);
int	ft_print_uns(unsigned int digit);
/*main function ft_printf*/
int	ft_printf(const char *format, ...);

#endif
