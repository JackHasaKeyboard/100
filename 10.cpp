#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	printf("Length: ");
	int len;
	scanf("%d", &len);


	printf("Your favourite word: ");
	char word[256];
	scanf("%s", word);

	char password[16];
	for (int i = 0; i < len - 5; i++) {
		password[i] = word[i];
	}


	printf("Do you need an uppercase letter? (y/n): ");
	char cap[1];
	scanf("%s", cap);

	char first;
	if (!strcmp(cap, "y")) {
		first = toupper(password[0]);
	}

	if (!strcmp(cap, "n")) {
		first = tolower(password[0]);
	}

	password[0] = first;


	int i = rand() % 1000;

	char no[4];
	sprintf(no, "%d", i);

	strcat(password, "_");


	char sym_list[] = "()`~!@#$%^&*-+=|\\{}[]:;\"'<>,.?/";

	printf("Do you need a symbol? (y/n): ");
	char input[1];
	scanf("%s", input);

	char sym[1];
	if (!strcmp(input, "y")) {
		srand(time(NULL)); // necessary. Should only be called once
		int i = rand() % strlen(sym_list);

		sym[0] = sym_list[i];
	}

	strcat(password, sym);


	printf("\n%s\n\n", password);


	return 0;
}
