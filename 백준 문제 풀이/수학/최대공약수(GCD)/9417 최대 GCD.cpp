#include <iostream>
#include <cstdlib>
using namespace std;

int ucled(int a, int b)
{
	if (b == 0)
		return a;
	return ucled(b, a % b);
}

int main()
{
	int M;
	cin >> M;
	while (M--) {
		int max = 0;
		int cnt = 0;
		int arr[100];
		char s[30];
		do {
			cin>>s;
			arr[cnt++] = atoi(s);
		} while (getc(stdin) == ' ');
		for (int i = 0; i < cnt; i++) {
			for (int j = i + 1; j < cnt; j++) {
				max = ucled(arr[i], arr[j]) > max ? ucled(arr[i], arr[j]) : max;
			}
		}
		cout << max << endl;
	}
}