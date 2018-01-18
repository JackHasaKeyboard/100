#include <stdio.h>

int main() {
	int div;

	for (int i = 1; i <= 100; i++) {
		div = 0;

		if (i % 3 == 0) {
			div = 1;

			printf("Fizz");
		}

		if (i % 5 == 0) {
			div = 1;

			printf("Buzz");
		}

		if (!div) {
			printf("%d", i);
		}

		printf("\n");
	}
}
