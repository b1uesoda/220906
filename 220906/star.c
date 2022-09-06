#include <stdio.h>

int main() {

	int input = 0;

	scanf_s("%d", &input);

	for (int i = 0; i < input; i++)
	{
		for (int a = input - i; a > 0; a--) {
			printf("*");
		}
		for (int b = input - i; b < input; b++) {
			printf("  ");
		}
		for (int a = input - i; a > 0; a--) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < input; i++)
	{
		for (int b = input - i; b <= input; b++) {
			printf("*");
		}
		for (int a = input - i - 1; a > 0; a--) {
			printf("  ");
		}
		for (int b = input - i; b <= input; b++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}