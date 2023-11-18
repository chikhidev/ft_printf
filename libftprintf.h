#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_lputchar(int c);
int	ft_lputstr(char *str);
int	ft_printf(const char *format, ...);
int	ft_print_mem(void *ptr, size_t size);

#endif
