#include <stdio.h>
/**
 * @brief Вычисляет пройденный путь по течению с за данными числами 
 * @param side пройденное расстояние 
 * @return Рассчитанное значение
 */
double s(const double v1,const double v2,const double t);
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
    printf("Enter the numbers\n");
    double v1=getDouble();
    double v2=getDouble();
    double t=getDouble();
    printf("distance=%lf\n",s(v1,v2,t));
    return 0;
}
double getDouble(){
    double v1 = 0.0;
    scanf("%lf",&v1 );
    return v1;
}
double s(const double v1,const double v2,const double t){
    return (v1+v2)*t;
}
