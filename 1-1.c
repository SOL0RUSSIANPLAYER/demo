#include <stdio.h>
#include <math.h>

double A(const double x, const double y, const double z);
double B(const double x, const double y, const double z);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    const double x =0.3;
    const double y =2.9;
    const double z=0.5;
    printf("A = %lf\n",A(x,y,z));
    printf("B = %lf\n",B(x,y,z));

    return 0;
}

double A(const double x, const double y, const double z)
{
    return pow(z,2)*x+exp(-x)*cos(y*x)/y*x-exp(-x)*sin(y*x)+1;
}

double B(const double x, const double y, const double z)
{
    return exp(2*x)*log10(z+x)-pow(y,3*x)*log10(y-x);
    
}  
