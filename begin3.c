#include <stdio.h>

int main() {
	int a;
	int b;
	printf("Введите сторону a: ");
	scanf("%d", &a);
	
	printf("Введите сторону b: ");
	scanf("%d", &b);
	
	int S = a * b ;
	int P = 2 * (a + b);
	
	printf("Площадь равна : %d\n", S);
	printf("Периметр равен : %d\n", P);
	
	return 0;
}
