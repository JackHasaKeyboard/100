#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	const char* move[] = {
		"Rock",
		"Paper",
		"Scissors"
	};

	srand(time(NULL)); // necessary. Should only be called once
	int comp = rand() % 3;

	for (int i = 0; i < sizeof(move) / sizeof(move[0]); i++) {
		printf("%d: %s\n", i, move[i]);
	}
	int human;
	scanf("%d", &human);

	int inf = comp + (comp == 0 ? 2 : -1),
			sup = comp - (comp == 2 ? 2 : -1);

	printf("%s... ", move[comp]);

	if (human == inf) {
		printf("you lose");
	}

	if (human == sup) {
		printf("you win");
	}

	if (human == comp) {
		printf("tie");
	}

	return 0;
}
