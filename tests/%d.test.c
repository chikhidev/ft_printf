// :Stdh
// :Stdh -
#include "test.h"

int main(void) {
    int f_len;
    int o_len;

    f_len = ft_printf("1.\t%d\n", -123);
    o_len = printf("1.\t%d\n", -123);
    printf("---------------------------\n");
    printf("got len = %d\n", f_len);
    printf("exp len = %d\n", o_len);
    print_result(compare_results(f_len, o_len));

    printf("---------------------------\n");
    // Repeat the same modifications for the remaining test cases...

    return 0;
}
