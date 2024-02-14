#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*
�������� ������������ ���������� a, b � � � ������ �� ��������.
�����������, ��� a, b, c ���� ������������ ����������� ��������� ������� �� ������� �������� �� ���-��� �1, �2.
������� ��������� ����� �������� �������������, ��� ������� ����� ��-��� ������������.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Russian");
	double a, b, c, d, x1, x2;
	printf("������� ����������� a: ");
	scanf("%lf", &a);
	printf("������� ����������� b: ");
	scanf("%lf", &b);
	printf("������� ����������� c: ");
	scanf("%lf", &c);
	d = b * b - 4 * a * c;
	if (d == 0) {
		x1 = -b / (2 * a);
		printf("x = %lf\n", x1);
	}
	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("x1 = %lf, x2 = %lf\n", x1, x2);
	}
	else printf("��� ������\n");
	return 0;
}
