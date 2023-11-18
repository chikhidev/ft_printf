#include "libftprintf.h"
#include <stdio.h>

int main() {
    int f_len;
    int o_len;
    int value = 747;
    int *ptr = &value;

    f_len = ft_printf("1.%p\n", (void*)ptr); // Cast to unsigned long long
    o_len = printf("2.%p\n", (void*)ptr);
    printf("got len = %d\n", f_len);
    printf("exp len = %d\n", o_len);
    return 0;
}
