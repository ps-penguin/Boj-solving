#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	int arr[7];
	while (T--) {
		int sum = 0;
		for (int i = 0; i < 7; i++) {
			cin >> arr[i];
			if (arr[i] % 2 == 0) {
				sum += arr[i];
			}
		}
		cout << sum << ' ';
		sort(arr, arr + 7);
		for (int i = 0; i < 7; i++) {
			if (arr[i] % 2 == 0) {
				cout << arr[i] << endl;
				break;
			}
		}
	}
}