#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int get_name() {
		printf("Name: ");
		char name[256];
		scanf("%s", name);

		int val;
		for (int i = 0; i < strlen(name); i++) {
			val += name[i] + '0'; // convert to ASCII code
		}

		float avg = val / strlen(name);
		float str = avg / 100;

		return str;
	}

	int you = get_name();
	int lover = get_name();

	int diff = abs(you - lover);

	for (int h = 0; h < diff; h++) {
		printf("<3");
	}

	return 0;
}
