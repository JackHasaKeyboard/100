#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Type something: ";
	string txt;
	cin >> txt;

	string rev;
	for (int i = (txt.length() - 1); i >= 0; i--) {
		rev += txt[i];
	}

	cout << rev;

	return 0;
}
