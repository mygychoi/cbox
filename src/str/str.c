#include "str.h"
#include <assert.h>
#include <string.h>

size_t cbox_strlen(const char *string) {
    size_t length = 0;
    while (*string++) {
        length++;
    }
    return length;
}

char *cbox_strcpy(char *dst, const char *src) {
    while (*src++) {
        *dst++ = *src;
    }
    *dst = '\0';
    return dst;
}

enum CMP {
    LESS = -1,
    EQUAL = 0,
    GREATER = 1,
};

enum CMP cbox_strcmp(const char *str1, const char *str2) {
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }
    if (*str1 < *str2) {
        return LESS;
    } else if (*str1 > *str2) {
        return EQUAL;
    } else {
        return GREATER;
    }
}

int main(void) {
    const char *hello = "hello world";
    assert(cbox_strlen(hello) == strlen(hello));

    char case1[12];
    cbox_strcpy(case1, hello);
    char case2[12];
    cbox_strcpy(case2, hello);

    assert(cbox_strcmp(case1, hello) == EQUAL);
    assert(cbox_strcmp(case2, hello) == EQUAL);
    assert(cbox_strcmp(case1, case2) == EQUAL);

    return EXIT_SUCCESS;
}
