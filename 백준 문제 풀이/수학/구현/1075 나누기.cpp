#include <iostream>

using namespace std;

int main() {
	int N, F, temp, i;
	cin >> N >> F;
	N = (N / 100) * 100;
	for (i = 0; i < 100; i++) {
		temp = N;
		if ((temp += i) % F == 0)
			break;
	}
	if (i < 10)
		cout << "0";
	cout << i;
}