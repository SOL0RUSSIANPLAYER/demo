#include <stdio.h>
/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();
/**
 * @brief вычисляет давление воды
 * @param h - вводимая высота
 * @param po - плотность 
 * @param g  - ускорение свободного падения
 * @return рассчитанное значение
 */
double p(double const po,const double g,const double h);
/**
* @brief Точка входа в программу
* @return 0, если программа выполнена корректно, иначе не 0
*/
int main()
{
    const double g = 10;
    const double po = 1000;
    printf("Enter h.\n");
    double h=getDouble();
    printf("pressure= %lf", p(po,g,h));
    return 0;
}

double getDouble()
{
    double h = 0.0;
    scanf("%lf",&h);
    return h;
}

double p(double const po, const double g, const double h) {
    return po * g * h;
}
