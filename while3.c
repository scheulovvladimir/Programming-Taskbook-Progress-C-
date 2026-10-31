#include <stdio.h>

int main() {
	int N, K;
	
	printf("Введите положительные числа N и K: ");
	if (scanf("%d %d", &N, &K)) {
		return 1;
	}
	
	if (N <= 0 || K <= 0) {
		printf("Числа должны быть положительными.\n");
		return 1;
	}
		
	while (N >= 0 || K >= 0) {
		N /= K;
		N %= K;
	}
	
	printf("Частное: %d\n", N);
	printf("Остаток: %d\n", N);
	
	return 0;
}
