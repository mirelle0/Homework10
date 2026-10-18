#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

float area_triangle(float a);
void info_triangle();
void draw_triangle(int a);

int main()
{
    setlocale(LC_ALL, "RUS");
    int choice;
    float a;

    printf("Введите сторону равностороннего треугольника (a): ");
    scanf("%f", &a);

    printf("\nВыберите операцию:\n");
    printf("1) Рассчитать площадь\n");
    printf("2) Вывести определение фигуры\n");
    printf("3) Нарисовать фигуру\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Площадь треугольника = %.2f\n", area_triangle(a));
        break;
    case 2:
        info_triangle();
        break;
    case 3:
        draw_triangle((int)a);
        break;
    default:
        printf("Неверный выбор!\n");
    }

    return 0;
}

float area_triangle(float a)
{
    return (sqrt(3.0) / 4.0) * a * a;
}

void info_triangle()
{
    printf("Равносторонний треугольник — это треугольник, у которого все стороны и углы равны.\n");
}

void draw_triangle(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < a - i; j++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}