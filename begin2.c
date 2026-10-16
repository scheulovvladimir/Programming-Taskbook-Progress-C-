#include <stdio.h>

int main() {
	int a;
	printf("Введите сторону квдрата: ");
	scanf("%d", &a);
	
	int S = a * a;
	
	printf("Площадь равна: %d\n", S);\
	
	return 0;
}
