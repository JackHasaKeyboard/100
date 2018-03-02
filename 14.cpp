#include <iostream>

using namespace std;

int main() {
	cout << "Enter a number: ";
	int no;
	cin >> no;

	while (no != 1) {
		if (no % 2 == 0) {
			no = no / 2;
		} else {
			no = (no * 3) + 1;
		}

		cout << no << endl;
	}

	return 0;
}
