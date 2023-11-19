run() {
    cc ft_printf.c utils/*.c libft/*.c tests/"$1".test.c && ./a.out
}