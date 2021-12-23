#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef struct student {
	string name;
	long long score;
}S;

int main() {
	int n;
	cin >> n;
	S par[100001];
	for (int i = 0; i < n; i++) {
		cin >> par[i].name >> par[i].score;
	}
	S tmp;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (par[i].score < par[j].score)
			{
				tmp = par[i];
				par[i] = par[j];
				par[j] = tmp;
			}
		}
	}
	vector<S> ans;
	ans.push_back(par[0]);
	for (int i = 1; i < n; i++) {
		if (par[i].score == par[0].score)
			ans.push_back(par[i]);
	}
	for (int i = 0; i < ans.size(); i++) {
		for (int j = i + 1; j < ans.size(); j++) {
			if (ans[i].name > ans[j].name) {
				tmp = ans[i];
				ans[i] = ans[j];
				ans[j] = tmp;
			}
		}
	}
	cout << ans[0].name;
	//시간 초과
}