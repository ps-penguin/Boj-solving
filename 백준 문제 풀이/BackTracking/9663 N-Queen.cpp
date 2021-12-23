#include <iostream>

using namespace std;

int N, result;
int col[16];

bool promising(int i) {
	for (int j = 0; j < i; j++) {
		//새로운 퀸이 기존의 퀸과 같은 행에 있거나 대각선에 있을 경우
		if (col[j] == col[i] || abs(col[i] - col[j]) == (i - j))
			return false;
	}
	return true;
}

void queens(int i) {
	if (i == N) {
		result++;
	}
	else {
		for (int j = 0; j < N; j++) {
			col[i] = j;
			if (promising(i)) {
				queens(i + 1);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	queens(0);
	cout << result << endl;
}
