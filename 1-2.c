#include <stdio.h>
#include <math.h>
/**
 * @brief Вычисляет пройденный путь по течению с за данными числами 
 * @param side пройденное расстояние 
 * @return Рассчитанное значение
 */
double s(const double side);
/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
 double getDouble();
 /**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    double U, u, t, s;

    printf("Введите скорость лодки в стоячем положении: ");
    scanf("%lf", &U);
    printf("Введите скорость течение реки: ");
    scanf("%lf", &u);
    printf("Введите время движения: ");
    scanf("%lf", &t);

    s = (U + u) * t;

    printf(" S = %f\n", s);

    return 0;
}
