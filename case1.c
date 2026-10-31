#include <stdio.h>

int main() {
	int day;
	
	printf("Day of the week (1-7): ");
	scanf("%d", &day);
	
	printf("Variant 1. if\n");
	if (day == 1) {
		printf("Monday\n");
	}
	else if (day == 2) {
		printf("Tuesday\n");
	}
	else if (day == 3) {
		printf("Wednesday\n");
	}
	else if (day == 4) {
		printf("Thursday\n");
	}
	else if (day == 5) {
		printf("Friday\n");
	}
	else if (day == 6) {
		printf("Saturday\n");
	}
	else if (day == 7) {
		printf("Sunday\n");
	}
	
	printf("Variant 2. switch ... case\n");
	switch (day) {
	case 1:
		printf("Monday\n");
		break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednesday\n");
		break;
	case 4:
		printf("Thursday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	case 6:
		printf("Sathurday\n");
		break;
	case 7:
		printf("Sunday\n");
		break;
	}
	
	return 0;
}
