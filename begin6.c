#include <stdio.h>

int main() {
	int a;
	int b;
	int c;
	
	printf("Введите ребро а: ");
	scanf("%d", &a);
	
	printf("Введите ребро b: ");
	scanf("%d", &b);
	
	printf("Введите ребро c: ");
	scanf("%d", &c);
	
	int V = a * b * c;
	int S = 2 * (a * b  + b * c + a * c);
	
	printf("Обьем равен : %d\n", V);
	printf("Площадь равна : %d\n", S);
	
	return 0;
}
