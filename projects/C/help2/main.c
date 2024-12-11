#include "stringfunc.h"

int main(int argc, char const *argv[]) {
    setlocale(LC_ALL, "ru_RU.UTF-8");  // Устанавливаем локаль для поддержки UTF-8

    if (argc < 2 || argc > 3) {
        printf("Вы ввели неверное количество аргументов.\nЗавершение работы.\n");
        return 0;
    }

    int func_num = atoi(argv[1]);

    if ((argc == 2 && func_num == 2) || func_num < 1 || func_num > 4) {
        printf("Неверный ввод функции.\nЗавершение программы.\n");
        return 0;
    }

    if (argc == 3 && func_num != 2) {
        printf("Вы передали лишний аргумент для функции %d.\nЗавершение программы.\n", func_num);
        return 0;
    }

    switch (func_num) {
        case 1:
            // Посчитать сколько и каких символов есть в тексте.
            // Вывести таблицу оформленную \t и \n удобную для зрительного восприятия.
            func1();
            break;
        case 2:
            // Определяет сколько раз в введенной строке встречается слово, заданное пользователем.
            char word[35];
            int i = 0;
            for (i; argv[2][i] != '\0'; i++) {
                word[i] = tolower(argv[2][i]);  // Преобразуем в нижний регистр
            }
            word[i+1] = L'\0';  // Завершаем строку
            func2(word);
            break;
        case 3:
            // Подсчитывает, сколько слов начинается с последней буквы первого слова.
            func3();
            break;
        case 4:
            // Превращает русский текст в транслит русского текста. Пример кот>kot, жук-> zhuk.
            func4();
            break;
        default:
            break;
    }

    return 0;
}
