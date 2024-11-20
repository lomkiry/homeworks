#include <stdio.h>

int main()
{
    char ch;
    float num1, num2, res;
    while(1){
        printf("Выберете желаемую операцию\n");
        printf("a. Сложение\t b. Вычитание\n");
        printf("c. Умножение\t d. Деление\n");
        printf("e. Завершение\n");
        scanf("%c", &ch);
        while (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd' && ch != 'e')
        {
            printf("Выберете желаемую операцию\n");
            printf("a. Сложение\t b. Вычитание\n");
            printf("c. Умножение\t d. Деление\n");
            printf("e. Завершение\n");
            scanf("%c", &ch);
            while (getchar() != '\n')
                getchar();
        }
        


    if (ch == 'e'){
        printf("Конец работы!\n");
        return 0;
    }


    do {
        printf("Введите первое число\n");
        while((scanf("%f", &num1) != 1)){
            printf("Неккоректный ввод! Введите число\n");
            while (getchar()!= '\n');
        }
    }
    while(num1 ==0);
    

    do {
        printf("Введите второе число\n");
        while (scanf("%f", &num2) != 1){
            printf("Неккоректный ввод! Введите число\n");
            while (getchar()!= '\n');
        }
        if (num2 == 0 && ch == 'd'){
            printf("Деление на ноль невозможно. Введите другое значение.\n");
        }
    }
    while (num2 == 0 && ch == 'd');

    while (getchar()!= '\n');
    switch (ch)
    {
    case 'a':
        res = num1 + num2;
        break;
    case 'b':
        res = num1 - num2;
        break;
    case 'c':
        res = num1 * num2;
        break;
    case 'd':
        res = num1 / num2;
        break;    
    }

    printf("Результат операции %c: %.2f\n", ch, res);
    }
    return 0;
}