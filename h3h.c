
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "RUS");
    double a, R, r;
    printf("������� ������� ��������: ");
    scanf_s("%lf", &a);
    if (a <= 0) {
        printf("������� �������� ������ ���� ������������� ������.\n");
        return 1;
    }
    R = a * sqrt(2) / 2;
    r = a / 2;
    printf("������ ��������� ����������: %.2f, ������ ��������� ����������: %.2f\n", R, r);

}
