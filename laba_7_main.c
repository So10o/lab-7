#include <stdio.h> 
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE

int main()
{
    setlocale(0, "RUS");
    char c1;
    printf("������� 1\n");
    printf("������� ������: ");
    scanf("%c", &c1);
    switch (c1) {
    case '0': printf("��� �����\n"); break;
    case '1': printf("��� �����\n"); break;
    case '2': printf("��� �����\n"); break;
    case '3': printf("��� �����\n"); break;
    case '4': printf("��� �����\n"); break;
    case '5': printf("��� �����\n"); break;
    case '6': printf("��� �����\n"); break;
    case '7': printf("��� �����\n"); break;
    case '8': printf("��� �����\n"); break;
    case '9': printf("��� �����\n"); break;
    default: printf("��� �����\n");
    }
    char n;
    float a, b;
    puts("������� 2");
    printf("������� ��������\n");
    scanf("%f", &a);
    scanf("%c", &n);
    scanf("%f", &b);

    switch (n)
    {
    case '+':
        printf("����� %.f � %.f ��� %.2f\n", a, b, a + b);
        break;
    case '-':
        printf("�������� %.f � %.f ��� %.2f\n", a, b, a - b);
        break;
    case '*':
        printf("������������ %.f � %.f ��� %.2f\n", a, b, a * b);
        break;
    case '/':
        printf("������� %.f � %.f ��� %.2f\n", a, b, a / b);
        break;
    default:
        printf("������");
    }
    return 0;
}