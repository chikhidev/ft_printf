#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "test.h"

void check_result(const char* expected_output, const char* actual_output) {
    if (strcmp(expected_output, actual_output) == 0) {
        printf("\033[0;32m\u2714 Passed\033[0m\n");
    } else {
        printf("\033[0;31m\u2718 Failed\033[0m\n");
        printf("Expected: %s\n", expected_output);
        printf("Actual:   %s\n", actual_output);
    }
}

void test_int_conversion(int input, const char* expected_output) {
    char buffer[100];
    memset(buffer, 0, sizeof(buffer));
    sprintf(buffer, "Testing %%d ... given (%d)", input);

    char output[100];
    memset(output, 0, sizeof(output));
    sprintf(output, "%d", input);

    printf("%s\n", buffer);
    check_result(expected_output, output);
    printf("\n");
}

void test_unsigned_int_conversion(unsigned int input, const char* expected_output) {
    char buffer[100];
    memset(buffer, 0, sizeof(buffer));
    sprintf(buffer, "Testing %%u ... given (%u)", input);

    char output[100];
    memset(output, 0, sizeof(output));
    sprintf(output, "%u", input);

    printf("%s\n", buffer);
    check_result(expected_output, output);
    printf("\n");
}

void test_hex_conversion(int input, const char* expected_output) {
    char buffer[100];
    memset(buffer, 0, sizeof(buffer));
    sprintf(buffer, "Testing %%x ... given (%d)", input);

    char output[100];
    memset(output, 0, sizeof(output));
    sprintf(output, "%x", input);

    printf("%s\n", buffer);
    check_result(expected_output, output);
    printf("\n");
}

void test_hex_uppercase_conversion(int input, const char* expected_output) {
    char buffer[100];
    memset(buffer, 0, sizeof(buffer));
    sprintf(buffer, "Testing %%X ... given (%d)", input);

    char output[100];
    memset(output, 0, sizeof(output));
    sprintf(output, "%X", input);

    printf("%s\n", buffer);
    check_result(expected_output, output);
    printf("\n");
}

void test_string_conversion(const char* input, const char* expected_output) {
    char buffer[100];
    memset(buffer, 0, sizeof(buffer));
    sprintf(buffer, "Testing %%s ... given (%s)", input);

    char output[100];
    memset(output, 0, sizeof(output));
    sprintf(output, "%s", input);

    printf("%s\n", buffer);
    check_result(expected_output, output);
    printf("\n");
}

void test_char_conversion(char input, const char* expected_output) {
    char buffer[100];
    memset(buffer, 0, sizeof(buffer));
    sprintf(buffer, "Testing %%c ... given (%c)", input);

    char output[100];
    memset(output, 0, sizeof(output));
    sprintf(output, "%c", input);

    printf("%s\n", buffer);
    check_result(expected_output, output);
    printf("\n");
}

int main() {
    test_int_conversion(123, "123");
    test_int_conversion(-456, "-456");
    test_int_conversion(789, "789");
    test_int_conversion(-789, "-789");

    test_unsigned_int_conversion(123, "123");
    test_unsigned_int_conversion(789, "789");

    test_hex_conversion(255, "ff");

    test_hex_uppercase_conversion(255, "FF");

    test_string_conversion("Hello", "Hello");
    test_string_conversion("Hello", "Hello");

    test_char_conversion('A', "A");
    test_char_conversion('A', "A");

    for (int i = 0; i < 3; i++) {
        int random_input = rand() % 100;
        char expected_output[10];
        sprintf(expected_output, "%d", random_input);
        test_int_conversion(random_input, expected_output);
    }

    for (int i = 0; i < 3; i++) {
        unsigned int random_input = rand() % 100;
        char expected_output[10];
        sprintf(expected_output, "%u", random_input);
        test_unsigned_int_conversion(random_input, expected_output);
    }

    for (int i = 0; i < 3; i++) {
        int random_input = rand() % 100;
        char expected_output[10];
        sprintf(expected_output, "%x", random_input);
        test_hex_conversion(random_input, expected_output);
    }

    for (int i = 0; i < 3; i++) {
        int random_input = rand() % 100;
        char expected_output[10];
        sprintf(expected_output, "%X", random_input);
        test_hex_uppercase_conversion(random_input, expected_output);
    }

    const char* strings[] = {
        "Test cases",
        "Random text",
        "H@rd-t0-r3@d 5tr!ngs",
        "Non-printable characters: \n\t\b\r",
        ""
    };
    int num_strings = sizeof(strings) / sizeof(strings[0]);
    for (int i = 0; i < 3; i++) {
        int random_index = rand() % num_strings;
        const char* random_input = strings[random_index];
        test_string_conversion(random_input, random_input);
    }

    char characters[] = { 'A', 'B', 'C' };
    int num_characters = sizeof(characters) / sizeof(characters[0]);
    for (int i = 0; i < 3; i++) {
        int random_index = rand() % num_characters;
        char random_input = characters[random_index];
        char expected_output[2];
        expected_output[0] = random_input;
        expected_output[1] = '\0';
        test_char_conversion(random_input, expected_output);
    }

    return 0;
}
