#include "test.h"

bool compare_results(int len1, int len2) {
    if (len1 == len2) {
        return true;
    } else {
        return false;
    }
}

void print_result(bool passed) {
    if (passed) {
        printf(ANSI_COLOR_GREEN "Passed\n" ANSI_COLOR_RESET);
    } else {
        printf(ANSI_COLOR_RED "Failed\n" ANSI_COLOR_RESET);
    }
}