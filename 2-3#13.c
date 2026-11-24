#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Находит максимальное из двух чисел с плавающей точкой
 * @param x первая перменная
 * @param y вторая перменная
 * @return Наибольшее значение
 */
double Max(const double x, const double y);

/**
 * @brief Проверяет, помещается ли составной прямоугольник в круг
 * @param w ширина составного прямоугольника
 * @param h высота составного прямоугольника
 * @param r радиус круга
 * @return true, если помещается, иначе false
 */
bool Circle(const double w, const double h, const double r);

/**
 * @brief Проверяет, можно ли вырезать две пластинки из круглой заготовки
 * @param r радиус заготовки
 * @param a длина первой пластинки
 * @param b ширина первой пластинки
 * @param c длина второй пластинки
 * @param d ширина второй пластинки
 * @return true, если пластинки можно вырезать, иначе false
 */
bool Cut(const double r, const double a, const double b, const double c, const double d);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main()
{
    printf("Введите радиус: ");
    const double r = getDouble();

    printf("введите длину первой пластинки : ");
    const double a = getDouble();

    printf("введите первую ширину пластинки : ");
    const double b = getDouble();

    printf("введите длину второй пластинки: ");
    const double c = getDouble();

    printf("введите ширину второй пластинки: ");
    const double d = getDouble();
    if (r <= 0, a <= 0, b <= 0, c <= 0,d <= 0)
    {
        printf("Ошибка, так как одно или несколько из чисел отрицательное.\n");
        return 1;
    }
    if (Cut(r, a, b, c, d))
    {
        printf("Да можно резать пластинки.\n");
    }
    else
    {
        printf("Нет, это невозможно.\n");
    }
    return 0;
}

double Max(const double x, const double y)
{
    return (x > y) ? x : y;
}

bool Circle(const double w, const double h, const double r)
{
    return (pow(w, 2) + pow(h, 2)) <= pow(2.0 * r, 2);
}

bool Cut(const double r, const double a, const double b, const double c, const double d)
{
    return Circle(a + c, Max(b, d), r);
           Circle(a + d, Max(b, c), r);
           Circle(b + c, Max(a, d), r);
           Circle(b + d, Max(a, c), r);
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf",&value)!=1)
    {
        printf("Error");
        exit(1);
    }
    return value;
}
