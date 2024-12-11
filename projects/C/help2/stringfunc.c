#include "stringfunc.h"

// Возвращает длинну строки
int mystrlen(const char *string) {
    int counter = 0;
    while (string[counter] != '\0')
        counter++;
    return counter;
}

int isDemiterwchar(wchar_t c) {
    return c == L' ' || c == L'\n' || c == L'.' || c == L',' || c == L';' || c == L':' || 
           c == L'?' || c == L'!' || c == L'=' || c == L'(' || c == L')' || c == L'\"' || 
           c == L'\0';
}

int isDemiter(char c) {
    return c == ' ' || c == '\n' || c == '.' || c == ',' || c == ';' || c == ':' || c == '?' || 
           c == '=' || c == '(' || c == ')' || c == '\"' || c == '\0';
}

int mystrcmp(const char *word1, const char *word2) {
    int len1 = mystrlen(word1);
    int len2 = mystrlen(word2);

    if (len1 != len2)
        return 0;

    for (int i = 0; i < len1; i++) {
        if (word1[i] != word2[i])
            return 0;
    }

    return 1;
}

// Функция подсчета символов в тексте
void func1() {
    wchar_t text[TERM_NUM][MAX_LEN_STR];  // Массив для хранения текста
    int counts[65536] = {0};              // Массив для подсчета символов

    // Чтение строк
    for (int i = 0; i < TERM_NUM; i++) {
        fgetws(text[i], MAX_LEN_STR, stdin);
    }

    // Подсчет символов
    for (int i = 0; i < TERM_NUM; i++) {
        for (int j = 0; text[i][j] != L'\0'; j++) {
            wchar_t ch = text[i][j];
            counts[ch]++;
        }
    }

    // Вывод результатов
    printf("Символ\t\tКол-во\n");
    for (int i = 0; i < 65536; i++) {
        if (counts[i] > 0) {
            if ((wchar_t)i == L'\n') {
                printf("'\\n'\t\t%d\n", counts[i]);
            }
            else {
                printf("'%lc'\t\t\t%d\n", (wchar_t)i, counts[i]);
            }
        }
    }
}

void func2(const char *word1) {
    int count = 0;
    char text[TERM_NUM][MAX_LEN_STR]; // 42 строки, каждая до 100 символов
    char word2[35] = {0}; // Для хранения текущего слова

    for (int i = 0; i < TERM_NUM; i++) 
        fgets(text[i], MAX_LEN_STR, stdin);

    // Проход по всем строкам
    for (int i = 0; i < 42; i++) {
        int k = 0;
        while (text[i][k] != '\0') {
            int j = 0;
            // Извлечение слова
            while (!isDemiter(text[i][k]) && text[i][k] != '\0') {
                word2[j] = text[i][k];
                k++;
                j++;
            }
            word2[j] = '\0'; // Завершение слова

            if (mystrcmp(word1, word2)) {
                count++;
            }

            // Пропуск разделителей
            while (isDemiter(text[i][k]) && text[i][k] != '\0') {
                k++;
            }
        }
    }

    printf("Слово \"%s\" было введено %d раз.\n", word1, count);
}

// Подсчитывает, сколько слов начинается с последней буквы первого слова.
void func3() {
    int count = 0;
    wchar_t text[TERM_NUM][MAX_LEN_STR]; 
    wchar_t word[35] = {0};
    wchar_t ch = L'\0';

    for (int i = 0; i < TERM_NUM; i++) {
        if (fgetws(text[i], MAX_LEN_STR, stdin) == NULL) {
            break;
        }
    }

    // Определяем последнюю букву первого слова
    for (int i = 0; text[0][i] != L'\0'; i++) {
        if (isDemiterwchar(text[0][i])) {
            if (i > 0) {
                ch = text[0][i-1]; // Последняя буква первого слова
            }
            break;
        }
    }

    // Если не удалось определить последнюю букву, завершаем
    if (ch == L'\0') {
        wprintf(L"Не удалось определить последнюю букву первого слова.\n");
        return;
    }

    // Подсчет слов, начинающихся с `ch`
    for (int i = 0; i < TERM_NUM; i++) {
        int k = 0;
        while (text[i][k] != L'\0') {
            int j = 0;

            // Извлечение слова
            while (!isDemiterwchar(text[i][k]) && text[i][k] != L'\0') {
                word[j] = text[i][k];
                k++;
                j++;
            }
            word[j] = L'\0'; // Завершение слова

            // Сравнение первой буквы слова с `ch`
            if (word[0] == ch) {
                count++;
            }

            // Пропуск разделителей
            while (isDemiterwchar(text[i][k]) && text[i][k] != L'\0') {
                k++;
            }
        }
    }

    // Вывод результата
    wprintf(L"Количество слов, начинающихся с '%lc': %d\n", ch, count);
}

// Превращает русский текст в транслит русского текста. Пример кот -> kot, жук -> zhuk.
void func4() {
    wchar_t text[TERM_NUM][MAX_LEN_STR] = {0};

    for (int i = 0; i < TERM_NUM; i++)
        fgetws(text[i], MAX_LEN_STR, stdin);

    for (int i = 0; i < TERM_NUM; i++) {
        for (int j = 0; text[i][j] != L'\0'; j++) {
            switch (text[i][j]) {
                case L'а': putwchar('a'); break;
                case L'б': putwchar('b'); break;
                case L'в': putwchar('v'); break;
                case L'г': putwchar('g'); break;
                case L'д': putwchar('d'); break;
                case L'е': putwchar('e'); break;
                case L'ё': putwchar('y'); putwchar('o'); break;
                case L'ж': putwchar('z'); putwchar('h'); break;
                case L'з': putwchar('z'); break;
                case L'и': putwchar('i'); break;
                case L'й': putwchar('j'); break;
                case L'к': putwchar('k'); break;
                case L'л': putwchar('l'); break;
                case L'м': putwchar('m'); break;
                case L'н': putwchar('n'); break;
                case L'о': putwchar('o'); break;
                case L'п': putwchar('p'); break;
                case L'р': putwchar('r'); break;
                case L'с': putwchar('s'); break;
                case L'т': putwchar('t'); break;
                case L'у': putwchar('u'); break;
                case L'ф': putwchar('f'); break;
                case L'х': putwchar('h'); break;
                case L'ц': putwchar('c'); break;
                case L'ч': putwchar('c'); putwchar('h'); break;
                case L'ш': putwchar('s'); putwchar('h'); break;
                case L'щ': putwchar('s'); putwchar('h'); putwchar('c'); putwchar('h'); break;
                case L'ъ': putwchar('\"'); break;
                case L'ы': putwchar('y'); break;
                case L'ь': putwchar('\''); break;
                case L'э': putwchar('e'); break;
                case L'ю': putwchar('y'); putwchar('u'); break;
                case L'я': putwchar('y'); putwchar('a'); break;
                case L'А': putwchar('A'); break;
                case L'Б': putwchar('B'); break;
                case L'В': putwchar('V'); break;
                case L'Г': putwchar('G'); break;
                case L'Д': putwchar('D'); break;
                case L'Е': putwchar('E'); break;
                case L'Ё': putwchar('Y'); putwchar('o'); break;
                case L'Ж': putwchar('Z'); putwchar('h'); break;
                case L'З': putwchar('Z'); break;
                case L'И': putwchar('I'); break;
                case L'Й': putwchar('J'); break;
                case L'К': putwchar('K'); break;
                case L'Л': putwchar('L'); break;
                case L'М': putwchar('M'); break;
                case L'Н': putwchar('N'); break;
                case L'О': putwchar('O'); break;
                case L'П': putwchar('P'); break;
                case L'Р': putwchar('R'); break;
                case L'С': putwchar('S'); break;
                case L'Т': putwchar('T'); break;
                case L'У': putwchar('U'); break;
                case L'Ф': putwchar('F'); break;
                case L'Х': putwchar('H'); break;
                case L'Ц': putwchar('C'); break;
                case L'Ч': putwchar('C'); putwchar('h'); break;
                case L'Ш': putwchar('S'); putwchar('h'); break;
                case L'Щ': putwchar('S'); putwchar('h'); putwchar('c'); putwchar('h'); break;
                case L'Ъ': putwchar('\"'); break;
                case L'Ы': putwchar('Y'); break;
                case L'Ь': putwchar('\''); break;
                case L'Э': putwchar('E'); break;
                case L'Ю': putwchar('Y'); putwchar('u'); break;
                case L'Я': putwchar('Y'); putwchar('a'); break;
                default: putwchar(text[i][j]); break;
            }
        }
    }
}
