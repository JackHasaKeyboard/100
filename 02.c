#include <stdio.h>

int main() {
	int convert(float temp, char metric) {
		float result;

		if (metric == 'c') {
			result = ((temp * 9.0) / 5.0) + 32.0;
		}

		if (metric == 'f') {
			result = (temp - 32.0) * (5.0 / 9.0);
		}

		return result;
	}

	return 0;
}
