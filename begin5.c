#include <stdio.h>

int main() {
	int a;
	printf("Введите длинну куба: ");
	scanf("%d", &a);
	
	int V = a * a * a;
	int S = 6 * (a * a);
	
	printf("Обьём равен : %d\n", V);
	printf("Площадь равна : %d\n", S);
	
	return 0;
}
