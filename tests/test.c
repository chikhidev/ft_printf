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
        printf("\t\t\t\tPassed\n\n");
    } else {
        printf("\t\t\t\tFailed\n\n");
    }
}