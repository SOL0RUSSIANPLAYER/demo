#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Суммирует натуральные числа 1, 2, 3..., пока сумма s не достигнет или не превысит h
 * @param h - предельное значение суммы
 * @param last - указатель для сохранения последнего слагаемого
 * @return Итоговое значение суммы s
 */
int calculateSum(const int h, int *last);

/**
 * @brief Проверяет, что h — положительное число
 * @param h - проверяемое значение
 */
void checkH(const int h);

/**
 * @brief Считывает целое значение с клавиатуры
 * @return Считанное значение
 */
int getInt();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Введите значение h:\n");
    int h = getInt();
    checkH(h);

    int last = 0;
    int s = calculateSum(h, &last);

    printf("Последнее слагаемое = %d\n", last);
    printf("Сумма s = %d\n", s);

    return 0;
}

int calculateSum(const int h, int *last)
{
    int s = 0;
    int current = 0;

    while (s < h)
    {
        current++;
        s += current;
    }

    *last = current;
    return s;
}

void checkH(const int h)
{
    if (h <= 0)
    {
        printf("Ошибка: h должна быть больше 0\n");
        exit(1);
    }
}

int getInt()
{
    int num = 0;
    if (scanf("%d", &num) != 1)
    {
        printf("Ошибка ввода\n");
        exit(1);
    }
    return num;
}
