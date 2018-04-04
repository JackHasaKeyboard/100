#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <map>

using namespace std;

vector<int> div(int size) {
	vector<int> no;
	int total = 0;
	while (total < size) {
		int min = 1,
				max = size - 1,
				r = min + (rand() % static_cast<int>(max - min + 1));

		if (total + r > size) {
			r = size - total;
		}

		total += r;

		no.push_back(r);
	}

	return no;
}

string line(int count) {
	map<int, string[3]> dict = {
		{
			1, {
				"love",
				"world",
				"heart"
			}
		},
		{
			2, {
				"tonight",
				"rooftop",
				"market"
			}
		},
		{
			3, {
				"family",
				"chocolate",
				"Africa"
			}
		},
		{
			4, {
				"identical",
				"beautiful",
				"everything"
			}
		},
		{
			5, {
				"photosynthesis",
				"anniversary",
				"imagination"
			}
		}
	};

	string txt;
	for (auto word : div(count)) {
		if (!txt.empty()) {
			txt.append(" ");
		}

		int size = 3,
				r = rand() % size;

		txt.append(dict[word][r]);
	}

	txt[0] = toupper(txt[0]);
	txt.append("\n");

	return txt;
}

int main() {
	srand(time(NULL)); // necessary. Should only be called once

	cout << line(5);
	cout << line(7);
	cout << line(5);

	return 0;
}
