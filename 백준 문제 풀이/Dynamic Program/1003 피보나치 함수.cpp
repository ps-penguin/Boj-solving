#include <iostream>
#include <algorithm>
using namespace std;


int fibo[1001] = { 1, 1, };

int fibonacci(int n) {
	if (n <= 1) {	//예외 처리
		return fibo[n];
	}
	else if (fibo[n] > 0)//계산된 값
		return fibo[n];
	return fibo[n] = fibonacci(n - 1) + fibonacci(n - 2);//피보나치 함수 점화식
}

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		if (N == 0) {
			cout << "1 0" << endl;
		}
		else if (N == 1) {
			cout << "0 1" << endl;
		}
		else {
			fibonacci(N);
			cout << fibo[N - 2] << ' ' << fibo[N - 1] << endl;
		}

	}

}