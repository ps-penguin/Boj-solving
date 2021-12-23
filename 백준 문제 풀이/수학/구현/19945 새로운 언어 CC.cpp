#include <iostream>
#include <string>
using namespace std;

int main() {
	long long a;
	int count = 0, bit = 1;
	cin >> a;
	if (a < 0)
		cout << 32 << endl;
	else if (a < 2)
		cout << 1 << endl;
	else
	{
		while (bit <= a) {
			count++;
			bit *= 2;
		}
		cout << count;
	}

}