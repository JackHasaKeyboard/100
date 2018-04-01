#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SHUFFLE(word) rand() % (sizeof(word) / sizeof(const char*))

char sentence[] = "";

void write(const char** txt, int i) {
	if (strcmp(sentence, "")) {
		strcat(sentence, " ");
	}

	strcat(sentence, txt[i]);
}

int main() {
	const char* noun[] = {
		"Jack",
		"the lamp",
		"the kitchen sink",
		"a group of dogs",
		"the country of Bolivia"
	};

	const char* adj[] = {
		"quickly",
		"clumsily",
		"brilliantly"
	};

	const char* verb[] = {
		"dropped",
		"saw",
		"drew",
		"leaped over"
	};


	srand(time(NULL)); // necessary. Should only be called once

	write(noun, SHUFFLE(noun));
	write(adj, SHUFFLE(adj));
	write(verb, SHUFFLE(verb));
	write(noun, SHUFFLE(noun));


	sentence[0] = toupper(sentence[0]);
	strcat(sentence, ".");


	printf("%s", sentence);

	return 0;
}
