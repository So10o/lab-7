#include <stdio.h> 
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE

int main()
{
    setlocale(0, "RUS");
    char c1;
    printf("Задание 1\n");
    printf("Введите символ: ");
    scanf("%c", &c1);
    switch (c1) {
    case '0': printf("это цифра\n"); break;
    case '1': printf("это цифра\n"); break;
    case '2': printf("это цифра\n"); break;
    case '3': printf("это цифра\n"); break;
    case '4': printf("это цифра\n"); break;
    case '5': printf("это цифра\n"); break;
    case '6': printf("это цифра\n"); break;
    case '7': printf("это цифра\n"); break;
    case '8': printf("это цифра\n"); break;
    case '9': printf("это цифра\n"); break;
    default: printf("это буква\n");
    }
    char n;
    float a, b;
    puts("Задание 2");
    printf("Введите операцию\n");
    scanf("%f", &a);
    scanf("%c", &n);
    scanf("%f", &b);

    switch (n)
    {
    case '+':
        printf("Сумма %.f и %.f это %.2f\n", a, b, a + b);
        break;
    case '-':
        printf("Разность %.f и %.f это %.2f\n", a, b, a - b);
        break;
    case '*':
        printf("Произведение %.f и %.f это %.2f\n", a, b, a * b);
        break;
    case '/':
        printf("Деление %.f и %.f это %.2f\n", a, b, a / b);
        break;
    default:
        printf("Ошибка");
    }
    return 0;
}