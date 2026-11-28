#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <float.h>
/**
 * @brief Вычисляет значение функции по заданной формуле
 * @param x - значение переменной x
 * @return Расчитанное значение
 */
double y(const double x);
/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Введите начало интервала:\n");
    double begin = getDouble();
    printf("Введите конец интервала:\n");
    double end = getDouble();
    printf("Введите шаг интервала:\n");
    double step = getDouble();
    printf("x\t\t\tY\n");
    for (double x = begin; x <= end + DBL_EPSILON; x += step)
    {
        if (x <= 0)
        {
            printf("%.2f\t\tНет решения\n", x);
        }
        else
        {
            printf("%.2f\t\t%lf\n", x, y(x));
        }
    }
    return 0;
}
double y(const double x)
{
    return 3*x-14+exp(x)-exp(-x) ;
}
double getDouble()
{
    double val = 0.0;
    if (scanf("%lf",&val) != 1)
    {
        printf("Error");
        exit(1);
    }
    return val;
}
