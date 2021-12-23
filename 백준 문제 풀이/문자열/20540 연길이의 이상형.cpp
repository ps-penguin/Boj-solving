#include <iostream>

using namespace std;

int main() {
	char s[4];
	cin >> s;
	if (s[0] == 'I')
		cout << 'E';
	else if (s[0] == 'E')
		cout << 'I';
	if (s[1] == 'S')
		cout << 'N';
	else if (s[1] == 'N')
		cout << 'S';
	if (s[2] == 'T')
		cout << 'F';
	else if (s[2] == 'F')
		cout << 'T';
	if (s[3] == 'J')
		cout << 'P';
	else if (s[3] == 'P')
		cout << 'J';

}