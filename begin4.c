#include <stdio.h>

int main() {
	int d;
	
	double PI = 3.14;
	
	printf("Введите диаметр окружности: ");
	scanf("%d", &d);
	
	double L = PI * d;
	
	printf("Длинна равна: %f\n", L);
	
	return 0;
}
