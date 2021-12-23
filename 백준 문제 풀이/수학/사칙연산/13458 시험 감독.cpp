#include <iostream>
#define max_int 1000001
#define lld long long

using namespace std;

int N, B, C;
int A[max_int];
lld result;

int main() {

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	cin >> B >> C;
	for (int i = 0; i < N; i++) {
		A[i] = A[i] - B;
		result++;
		if (A[i] > 0) {
			result += A[i] / C;
		}
		if (A[i] % C > 0) {
			result++;
		}
	}
	cout << result;
}