#include "strlib.h"
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cstdio>

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
int StringFunctions::mystrcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

int StringFunctions::StringToNumber(char* str) {
    return atoi(str);
}

char* StringFunctions::NumberToString(int number) {
    char* str = new char[20];
    snprintf(str, 20, "%d", number);
    return str;
}

char* StringFunctions::Uppercase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

char* StringFunctions::Lowercase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

char* StringFunctions::mystrrev(char* str) {
    int length = mystrlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    return str;
}