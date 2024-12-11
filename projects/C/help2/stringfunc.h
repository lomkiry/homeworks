#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <wchar.h>
#include <wctype.h>

#define TERM_NUM 42 // Кол-во строк в тексте
#define MAX_LEN_STR 100 // Кол-во символов в строке

void func1();
void func2(const char *word1);
void func3();
void func4();
int mystrcmp(const char *str1, const char *str2);
int mystrlen(const char *string);
int isDemiter(char c);
int isDemiterwchar(wchar_t c);