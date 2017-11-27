#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Количество слагаемых */
    int n;

    /* Считываем значения для количества слагаемых */
    printf("Сколько слагаемых в сумме? ");
    scanf("%d", &n);

    printf("Сумма %d нечётных чисел равна ", n);

    /* Перменные для заполнения слагаемого и суммы */
    int q = 1, s = 0;

    /* Считаем сумму */
    while (n--) {
        s+=q;
        q+=2;
    }

    printf("%d\n", s);

    return 0;
}
