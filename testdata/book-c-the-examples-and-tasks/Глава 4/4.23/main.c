#include <stdio.h>
#include <stdlib.h>

/*
 * Функция для вычисления значения полинома.
 *
 * Аргументы: имя массива, степень полинома
 * и аргументы для поиска
 */
double polynom(double *a, int n, double x)
{
    /*
     * Переменная для записи значения полиномиальной суммы
     * и значения степенного множителя
     */
    double s = 0, q = 1;

    int k;

    /*
     * Вычисление полиномиальной суммы
     */
    for (k = 0; k <= n; k++) {
        /* Добавление слагаемого к сумме */
        s += a[k] * q;

        /* Степенной множитель для следующего цикла */
        q *= x;
    }

    return s;
}

int main(void)
{
    /* Массив с коэффициентами для полинома */
    double a[] = {1, -3, 2, -1, 1};

    /* Аргумент для полинома и превращение для аргумента */
    double x = -2, dx = 1.0;

    /* Индексная переменная */
    int k;

    /* Вычисление полинома в разных точках */
    for (k = 1; k <= 5; k++) {
        /* Значение полинома */
        printf("P(%5.2f)=%6.2f\n", x, polynom(a, 4, x));
        /* Новое значение аргумента */
        x += dx;
    }

    return 0;
}