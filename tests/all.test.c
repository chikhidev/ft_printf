#include "test.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = ft_printf("Let's try to ft_printf a simple sentence -------------------------------------\n");
    len2 = printf("Let's try to ft_printf a simple sentence -------------------------------------\n");
    print_result(compare_results(len, len2));

    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

    len = ft_printf("Length:[%d, %i]\n", len, len);
    len2 = printf("Length:[%d, %i]\n", len2, len2);
    print_result(compare_results(len, len2));

    len = ft_printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);
    print_result(compare_results(len, len2));

    len = ft_printf("Unsigned:[%u]\n", ui);
    len2 = printf("Unsigned:[%u]\n", ui);
    print_result(compare_results(len, len2));

    len = ft_printf("Unsigned octal:[%o]\n", ui);
    len2 = printf("Unsigned octal:[%o]\n", ui);
    print_result(compare_results(len, len2));

    len = ft_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    print_result(compare_results(len, len2));

    len = ft_printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
    print_result(compare_results(len, len2));

    len = ft_printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    print_result(compare_results(len, len2));

    len = ft_printf("Address:[%p]\n", addr);
    len2 = printf("Address:[%p]\n", addr);
    print_result(compare_results(len, len2));

    len = ft_printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    print_result(compare_results(len, len2));

    len = ft_printf("Unknown:[%r]\n");
    len2 = printf("Unknown:[%r]\n");
    print_result(compare_results(len, len2));

    return (0);
}