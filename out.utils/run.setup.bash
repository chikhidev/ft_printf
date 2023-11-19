alias seth="python out.utils/header_setter.py"
run() {
    cc ft_printf.c utils/*.c tests/"$1".test.c && ./a.out
}