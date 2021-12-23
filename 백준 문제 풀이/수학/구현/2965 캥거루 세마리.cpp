#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int D[3];
	for (int i = 0; i < 3; i++) {
		cin >> D[i];
	}
	sort(D, D + 3);
	cout << max(D[2] - D[1], D[1] - D[0]) - 1 << endl;
}