#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>
/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();
/**
 * @brief вычисляет значение функции по заданной формуле
 * @param x - вводимая переменная
 * @return рассчитанное значение
 */
double y(const double x);
/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Введите x: ");
    double x = getDouble();
    printf("y = %lf\n", y(x));
    return 0;
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf", &value) != 1)
    {
        printf("ошибка\n");
        exit(1);
    }
    return value;
}

double y(const double x)
{
    const double a = 1.6;

    if (fabs(x - a) < DBL_EPSILON)
    {
        printf("Функция не определена\n");
        exit(1);
    }
    if (x > a)
    {
        return exp(a * x) - 2.5;
    }
    if (fabs(x) < DBL_EPSILON)
    {
        return 3.0;
    }
    return (a / x) + sin(x);
}
