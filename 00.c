#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	const char *first[] = {
		"Jack",
		"Fred",
		"Michael",
		"Sophia",
		"Emma"
	};

	const char *middle[] = {
		"Kenneth",
		"Robert",
		"Allen",
		"Faith",
		"Lynn",
	};

	const char *last[] = {
		"Alma",
		"Smith",
		"Jones",
		"Johnson",
		"Williams",
	};

	srand(time(NULL)); // necessary. Should only be called once

	int nos[3];

	for (int i = 0; i < 3; i++) {
		nos[i] = rand() % (sizeof(first) / sizeof(*first));
	}

	printf("%s %s %s", first[nos[0]], middle[nos[1]], last[nos[2]]);

	return 0;
}
