
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "RUS");
    double a, R, r;
    printf("Введите сторону квадрата: ");
    scanf_s("%lf", &a);
    if (a <= 0) {
        printf("Сторона квадрата должна быть положительным числом.\n");
        return 1;
    }
    R = a * sqrt(2) / 2;
    r = a / 2;
    printf("Радиус описанной окружности: %.2f, радиус вписанной окружности: %.2f\n", R, r);

}
