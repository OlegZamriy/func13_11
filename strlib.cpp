#include "strlib.h"

int StringFunctions::mystrlen(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

char* StringFunctions::mystrcpy(char* str1, const char* str2) {
    char* originalStr1 = str1;
    while ((*str1++ = *str2++) != '\0');
    return originalStr1;
}

char* StringFunctions::mystrcat(char* str1, const char* str2) {
    char* originalStr1 = str1;
    while (*str1 != '\0') {
        str1++;
    }
    while ((*str1++ = *str2++) != '\0');
    return originalStr1;
}

char* StringFunctions::mystrchr(char* str, char s) {
    while (*str != '\0') {
        if (*str == s) {
            return str;
        }
        str++;
    }
    return nullptr;
}

char* StringFunctions::mystrstr(char* str1, char* str2) {
    while (*str1 != '\0') {
        char* start = str1;
        char* substring = str2;

        while (*substring != '\0' && *str1 == *substring) {
            str1++;
            substring++;
        }

        if (*substring == '\0') {
            return start;
        }

        str1 = start + 1;
    }

    return nullptr;
}
