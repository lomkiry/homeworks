#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <wchar.h>
#include <wctype.h>

#define TERM_NUM 42 // Кол-во строк в тексте
#define MAX_LEN_STR 100 // Кол-во символов в строке

void func1();
void func2(const wchar_t *word1);
void func3();
void func4();
int mystrcmp(const wchar_t *str1, const wchar_t *str2);
int mystrlen(const wchar_t *string);
int isDemiter(wchar_t c);
