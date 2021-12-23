#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	long long arr[500001];
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += arr[i] * (sum - arr[i]);
		sum -= arr[i];
	}
	cout << ans;
}