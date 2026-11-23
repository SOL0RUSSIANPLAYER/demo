#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Вычисляет длину стороны треугольника по координатам двух вершин
 * @param x1 координата X первой вершины
 * @param y1 координата Y первой вершины
 * @param x2 координата X второй вершины
 * @param y2 координата Y второй вершины
 * @return Длина отрезка между вершинами
 */
double Side(const double x1, const double y1, const double x2, const double y2);
/**
 * @brief Вычисляет периметр треугольника
 * @param a длина первой стороны
 * @param b длина второй стороны
 * @param c длина третьей стороны
 * @return Периметр треугольника
 */
double P(const double a, const double b, const double c);

/**
 * @brief Вычисляет площадь треугольника по формуле Герона
 * @param a длина первой стороны
 * @param b длина второй стороны
 * @param c длина третьей стороны
 * @return Площадь треугольника
 */
double S(const double a, const double b, const double c);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter x1: ");
    const double x1 = getDouble();
    printf("Enter y1: ");
    const double y1 = getDouble();

    printf("Enter x2:");
    const double x2 = getDouble();
    printf("Enter y2: ");
    const double y2 = getDouble();

    printf("Enter x3:");
    const double x3 = getDouble();
    printf("Enter y3: ");
    const double y3 = getDouble();

    const double a = Side(x1, y1, x2, y2);
    const double b = Side(x2, y2, x3, y3);
    const double c = Side(x1, y1, x3, y3);
    printf("Периметр = %lf\n", P(a, b, c));
    printf("Площадь = %lf\n", S(a, b, c));

    return 0;
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf", &value) != 1)
    {
        printf("Error");
        exit(1);
    }
    return value;
}

double Side(const double x1, const double y1, const double x2, const double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
double P(const double a, const double b, const double c)
{
    return a + b + c;
}

double S(const double a, const double b, const double c)
{
    const double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
