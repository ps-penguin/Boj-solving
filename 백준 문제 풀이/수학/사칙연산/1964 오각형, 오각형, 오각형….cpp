#include <iostream>

using namespace std;

int main() {
	long long N, r;
	cin >> N;
	r = 1 + 4 * N + 3 * N * (N - 1) / 2;
	cout << r % 45678 << endl;
}