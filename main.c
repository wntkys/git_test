#include <stdio.h>

int main()
{
    puts("Введите пожалуйста два числа, а я выведу вам сумму");
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%lf\n", a + b);
    return 0;
}
