#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/*libft functions*/
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);

/*utils*/
int		ft_lputchar(int c);
int		ft_lputstr(char *str);
int		ft_print_hex(uintptr_t address, int first_call);
int		ft_print_dig(int digit);
int		ft_print_uns(unsigned int digit);

/*main function ft_printf*/
int		ft_printf(const char *format, ...);

#endif
