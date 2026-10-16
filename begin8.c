#include <stdio.h>

int main() {
	int a;
	int b;
	
	printf("Введите число а: ");
	scanf("%d", &a);
	
	printf("Введите число b: ");
	scanf("%d", &b);
	
	double mid = (a + b) / 2;
	
	printf("Ср. Арефмитическое : %f\n", mid);
	
	return 0;
}
