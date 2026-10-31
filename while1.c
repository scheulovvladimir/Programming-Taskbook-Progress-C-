#include <stdio.h>

int main() {
	int A, B;
	
	printf("Введите положительные числа A и B: ");
	if (scanf("%d %d", &A, &B) != 2) {
		printf("Ошибка ввода.\n");
		return 1;
	}
	
	if (A <= 0 || B <= 0) {
		printf("Числа должны быть положительными.\n");
		return 1;
	}
	if (A <= B) {
		printf("Должно выполняться условие A > B.\n");
		return 1;
	}
	
	while (A >= B) {
		A -= B;
	}
	
	printf("Длина части отрезка: %d\n", A);
	
	return 0;
}
