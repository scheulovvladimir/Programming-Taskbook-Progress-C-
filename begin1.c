#include <stdio.h>

int main() {
	int a;
	printf("Введите сторону квдрата: ");
	scanf("%d", &a);
	
	int P = 4 * a;
	
	printf("Периметр равен : %d\n", P);\
	
	return 0;
}
