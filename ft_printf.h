#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/*libft functions*/
char	*ft_strdup(const char *s1);
char	*ft_itoa(int n);
void	*ft_memcpy(void *dst, const void *src, size_t n);

/*utils*/
int		ft_lputchar(int c);
int		ft_lputstr(char *str);
int		ft_print_hex(uintptr_t address, int first_call);

/*main function ft_printf*/
int		ft_printf(const char *format, ...);

#endif
