#include <iostream>

using namespace std;

int main() {
	long long N, W, H, L;
	cin >> N >> W >> H >> L;
	long long res = (W / L) * (H / L);
	if (res > N)	
	{
		cout << N;
	}
	else cout << res;
}