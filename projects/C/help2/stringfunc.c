#include "stringfunc.h"

// Определяет является ли символ разделителем
int isDemiter(wchar_t c) {
    return c == L' ' || c == L'\n' || c == L'.' || c == L',' || c == L';' || c == L':' || c == L'?' || c == L'=' || c == L'(' || c == L')' || c == L'\"' || c == L'\'' || c == L'\0';
}

// Функция возвращающая длину строки
int mystrlen(const wchar_t *string) {
    int len = 0;
    while (*string != L'\0') {
        len++;
        string++;
    }
    return len;
}

// Функция возвращающая 1, если строки совпадают, и 0 иначе
int mystrcmp(const wchar_t *str1, const wchar_t *str2) {
    int len1 = mystrlen(str1);
    int len2 = mystrlen(str2);

    if (len1 != len2)
        return 0;
    for (int i = 0; str1[i] != L'\0'; i++) {
        if (str1[i] != str2[i])
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
                printf("'%lc'\t\t%d\n", (wchar_t)i, counts[i]);
            }
        }
    }
}

// Функция поиска совпадений слова
void func2(const wchar_t *word1) {
    wchar_t word2[35] = {0};
    wchar_t text[TERM_NUM][MAX_LEN_STR] = {0};
    int count = 0;

    // Чтение строк
    for (int i = 0; i < TERM_NUM; i++)
        fgetws(text[i], MAX_LEN_STR, stdin);

    // Проходим по всем строкам
    for (int i = 0; i < TERM_NUM; i++) {
        int k = 0;
        int j = 0;

        // Обрабатываем строку по символам
        while (text[i][k] != L'\0') {
            // Пропускаем разделители
            while (isDemiter(text[i][k])) {
                k++;
            }

            // Если символ не разделитель, начинаем собирать слово
            while (!isDemiter(text[i][k]) && text[i][k] != L'\0') {
                word2[j++] = text[i][k++];
            }
            word2[j] = L'\0';  // Завершаем слово

            // Если слово совпадает с искомым, увеличиваем счетчик
            if (mystrcmp(word1, word2)) {
                count++;
            }

            // Очищаем слово для следующей итерации
            j = 0;
        }
    }

    // Вывод результата
    printf("Количество совпадений: %d\n", count);
}

// Превращает русский текст в транслит русского текста. Пример кот -> kot, жук -> zhuk.
void func4() {
    wchar_t text[TERM_NUM][MAX_LEN_STR] = {0};

    // Чтение строк
    for (int i = 0; i < TERM_NUM; i++)
        fgetws(text[i], MAX_LEN_STR, stdin);

    // Обработка текста
    for (int i = 0; i < TERM_NUM; i++) {
        for (int j = 0; text[i][j] != L'\0'; j++) {
            switch (text[i][j]) {
                case L'а': putchar('a'); break;
                case L'б': putchar('b'); break;
                case L'в': putchar('v'); break;
                case L'г': putchar('g'); break;
                case L'д': putchar('d'); break;
                case L'е': putchar('e'); break;
                case L'ё': putchar('y'); putchar('o'); break;
                case L'ж': putchar('z'); putchar('h'); break;
                case L'з': putchar('z'); break;
                case L'и': putchar('i'); break;
                case L'й': putchar('j'); break;
                case L'к': putchar('k'); break;
                case L'л': putchar('l'); break;
                case L'м': putchar('m'); break;
                case L'н': putchar('n'); break;
                case L'о': putchar('o'); break;
                case L'п': putchar('p'); break;
                case L'р': putchar('r'); break;
                case L'с': putchar('s'); break;
                case L'т': putchar('t'); break;
                case L'у': putchar('u'); break;
                case L'ф': putchar('f'); break;
                case L'х': putchar('h'); break;
                case L'ц': putchar('c'); break;
                case L'ч': putchar('c'); putchar('h'); break;
                case L'ш': putchar('s'); putchar('h'); break;
                case L'щ': putchar('s'); putchar('h'); putchar('c'); putchar('h'); break;
                case L'ъ': putchar('\"'); break;
                case L'ы': putchar('y'); break;
                case L'ь': putchar('\''); break;
                case L'э': putchar('e'); break;
                case L'ю': putchar('y'); putchar('u'); break;
                case L'я': putchar('y'); putchar('a'); break;
                case L'А': putchar('A'); break;
                case L'Б': putchar('B'); break;
                case L'В': putchar('V'); break;
                case L'Г': putchar('G'); break;
                case L'Д': putchar('D'); break;
                case L'Е': putchar('E'); break;
                case L'Ё': putchar('Y'); putchar('O'); break;
                case L'Ж': putchar('Z'); putchar('H'); break;
                case L'З': putchar('Z'); break;
                case L'И': putchar('I'); break;
                case L'Й': putchar('J'); break;
                case L'К': putchar('K'); break;
                case L'Л': putchar('L'); break;
                case L'М': putchar('M'); break;
                case L'Н': putchar('N'); break;
                case L'О': putchar('O'); break;
                case L'П': putchar('P'); break;
                case L'Р': putchar('R'); break;
                case L'С': putchar('S'); break;
                case L'Т': putchar('T'); break;
                case L'У': putchar('U'); break;
                case L'Ф': putchar('F'); break;
                case L'Х': putchar('H'); break;
                case L'Ц': putchar('C'); break;
                case L'Ч': putchar('C'); putchar('H'); break;
                case L'Ш': putchar('S'); putchar('H'); break;
                case L'Щ': putchar('S'); putchar('H'); putchar('C'); putchar('H'); break;
                case L'Ъ': putchar('\"'); break;
                case L'Ы': putchar('Y'); break;
                case L'Ь': putchar('\''); break;
                case L'Э': putchar('E'); break;
                case L'Ю': putchar('Y'); putchar('U'); break;
                case L'Я': putchar('Y'); putchar('A'); break;
                default: putchar(text[i][j]); break;
            }
        }
    }
}
