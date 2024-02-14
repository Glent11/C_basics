#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*
Объявить вещественные переменные a, b и с и задать их значения.
Предполагая, что a, b, c есть коэффициенты квадратного уравнения вывести на консоль значения их кор-ней х1, х2.
Следует подобрать такие значения коэффициентов, при которых корни бу-дут существовать.
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Russian");
	double a, b, c, d, x1, x2;
	printf("Введите коэффициент a: ");
	scanf("%lf", &a);
	printf("Введите коэффициент b: ");
	scanf("%lf", &b);
	printf("Введите коэффициент c: ");
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
	else printf("Нет корней\n");
	return 0;
}
