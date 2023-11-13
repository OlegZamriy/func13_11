#ifndef STRLIB_H
#define STRLIB_H

#include <iostream>

class StringFunctions {
public:
    static int mystrlen(const char* str);
    static char* mystrcpy(char* str1, const char* str2);
    static char* mystrcat(char* str1, const char* str2);
    static char* mystrchr(char* str, char s);
    static char* mystrstr(char* str1, char* str2);
};

#endif 
