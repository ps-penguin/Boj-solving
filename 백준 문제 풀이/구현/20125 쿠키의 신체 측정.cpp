#include <iostream>

using namespace std;

char map[1000][1000];

typedef struct pos {
	int x, y;
}P;

P heart_position;
P waist_position;
int n;

void find_heart() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((map[i][j]) == '*')
			{
				heart_position.x = j;
				heart_position.y = i + 1;
				return;
			}
		}
	}
}



int left_arm;
int right_arm;
int left_leg;
int right_leg;
int waist;

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}

	find_heart();

	for (int j = 0; j < heart_position.x; j++) {
		if (map[heart_position.y][j] == '*')
			left_arm++;
	}
	for (int j = heart_position.x + 1; j < n; j++) {
		if (map[heart_position.y][j] == '*')
			right_arm++;
	}
	waist_position.x = heart_position.x;
	for (int i = heart_position.y + 1; i < n; i++) {
		if (map[i][heart_position.x] != '*') {
			waist_position.y = i - 1;
			break;
		}
		waist++;
	}
	for (int i = waist_position.y + 1; i < n; i++) {
		if (map[i][waist_position.x - 1] != '*')
			break;
		left_leg++;
	}
	for (int i = waist_position.y + 1; i < n; i++) {
		if (map[i][waist_position.x + 1] != '*')
			break;
		right_leg++;
	}
	cout << heart_position.y + 1 << ' ' << heart_position.x + 1 << endl;
	cout << left_arm << ' ' << right_arm << ' ' << waist << ' ' << left_leg << ' ' << right_leg;
}