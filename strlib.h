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
    static int mystrcmp(const char* str1, const char* str2);
    static int StringToNumber(char* str);
    static char* NumberToString(int number);
    static char* Uppercase(char* str);
    static char* Lowercase(char* str);
    static char* mystrrev(char* str);
};

#endif 
