// :Stdh
// :Stdh -
#include "test.h"

void run_tests(void) {
    int f_len, o_len;

    f_len = ft_printf("1. sign: %% you");
    printf("\n");
    o_len = printf("1. sign: %% you");
    printf("\n");
    printf("---------------------------\n");
    printf("got len = %d\n", f_len);
    printf("exp len = %d\n", o_len);
    if (f_len == o_len)
        printf(ANSI_COLOR_GREEN "Passed\n" ANSI_COLOR_RESET);
    else
        printf(ANSI_COLOR_RED "Failed\n" ANSI_COLOR_RESET);
    printf("---------------------------\n");
}

int main(void) {
    run_tests();

    return 0;
}
