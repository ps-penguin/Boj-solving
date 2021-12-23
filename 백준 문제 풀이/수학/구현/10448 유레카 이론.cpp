#include <iostream>

using namespace std;

//n*(n+2)/2 <= 1000이므로 n의 최댓값은 44

int tNum[45];
void maketNum() {
	for (int i = 1; i < 45; i++) {
		tNum[i - 1] = (i * i + i) / 2;
	}
}
int istNum(int K) {
	for (int i = 0; i < 44; i++) {
		for (int j = 0; j < 44; j++) {
			for (int k = 0; k < 44; k++) {
				if (tNum[i] + tNum[j] + tNum[k] == K) {
					return 1;
				}
			}
		}
	}
	return 0;
}

int main() {
	int T;
	cin >> T;
	maketNum();
	int K;
	while (T--) {
		cin >> K;
		cout << istNum(K) << endl;
	}
}