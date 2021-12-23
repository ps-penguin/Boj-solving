#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int n;
		cin >> n;
		int count = 0;
		for (int i = 0; i < n; i++) {
			int cx, cy, r, d;
			bool in1, in2;
			cin >> cx >> cy >> r;
			d = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
			in1 = d > r * r ? false : true;
			d = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);
			in2 = d > r * r ? false : true;
			if (in1 != in2)//두 점 중 하나만 안에 있을때
				count++;
		}
		cout << count << endl;
	}
}