#include <iostream>
#include <cstdlib>

using namespace std;

string ans[] = {
	"It is certain",
	"It is decidedly so",
	"Without a doubt",
	"Yes definitely",
	"You may rely on it",
	"As I see it, yes",
	"Most likely",
	"Outlook good",
	"Yes",
	"Signs point to yes",
	"Reply hazy try again",
	"Ask again later",
	"Better not tell you now",
	"Cannot predict now",
	"Concentrate and ask again",
	"Don't count on it",
	"My reply is no",
	"My sources say no",
	"Outlook not so good",
	"Very doubtful"
};

string shake() {
	cout << "What do you wish to ask?: ";
	string q;
	cin >> q;

	cout << "Strength: ";
	int str;
	cin >> str;

	int r = std::rand() % (sizeof(ans) / sizeof(*ans));

	int i = str + r;

	return ans[i];
}

int main() {
	cout << shake();

	return 0;
}
