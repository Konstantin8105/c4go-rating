#include <stdio.h>
#include <stdlib.h>

// Степени полиномов
#define M 5
#define N 7

/* Произведение полиномов */
int main(void)
{
    /* Коэффициенты для первого полинома */
    int P[M + 1] = {1, 5, 7, -1, 0, 1};

    /* Коэффициенты для второго полинома */
    int Q[N + 1] = {-1, 2, 3, 1, 2, -1, 1, 2};

    /* Массив для записи коэффициентов полинома - результата произведения */
    int R[M + N + 1];

    /* Индексные переменные */
    int i, j;

    /* Начальные нулевые значения для полинома - результата произведения */
    for (i = 0; i <= M + N; i++)
        R[i] = 0;

    /* Вычисление результата */
    for (i = 0; i <= M; i++) {
        for (j = 0; j <= N; j++)
            R[i + j] += P[i] * Q[j];
    }

    printf("Коэффициенты первого полинома:\n");

    for (i = 0; i <= M; i++)
        printf("|%3d ", P[i]);

    printf("|\n");

    printf("Коэффициенты второго полинома:\n");

    for (i = 0; i <= N; i++)
        printf("|%3d ", Q[i]);

    printf("|\n");

    printf("Коэффициенты полинома-произведения:\n");

    for (i = 0; i <= M + N; i++)
        printf("|%3d ", R[i]);

    printf("|\n");

    return 0;
}