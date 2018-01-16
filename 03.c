#define _XOPEN_SOURCE
#include <stdio.h>
#include <time.h>
#include <math.h>

int main() {
	printf("Birthday (UNIX Timestamp): ");

	time_t birth_date;
	scanf("%ld", &birth_date);

	time_t now = (unsigned long)time(NULL);

	long age = now - birth_date;

	int yrs = floor(age / (60 * 60 * 24 * 365));

	printf("%d", yrs);

	return 0;
}
