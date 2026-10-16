#include <stdio.h>

int main() {
	int r;
	double pi = 3.14;
	
	printf("Введите радиус окружности: ");
	scanf("%d", &r);
	
	double l = 2 * pi * r;
	double s = pi * (r * r);
	
	printf("Длинна равна : %f\n", l);
	printf("Площадь равна : %f\n", s);
	
	return 0;
}
