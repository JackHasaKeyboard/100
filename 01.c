#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	const char *side[] = {
		"Heads",
		"Tails"
	};

	srand(time(NULL)); // necessary. Should only be called once
	int i = rand() % 2;

	printf("%s", side[i]);

	return 0;
}
