#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void Result()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		long a, b;
		scanf("%ld %ld", &a, &b);
		int result = a;

		// 모든 숫자는 4순환주기마다 100% 동일 숫자가 나온다 ( 연산속도 극적 향상 )
		// 따라서 제곱하는 횟수를 4~7로 줄일수 있다. 
		b = b % 4 + 4;

		// 2번째 제곱부터 b 번째 제곱까지 a 값을 곱한다.
		for (int i = 2; i <= b; ++i)
			// 곱하긴 곱하는데 그냥 곱하면 분명 범위 초과가 뜨므로
			// 문제의 목적은 몇번째 컴퓨터를 구하는 것이기 때문에 곱한 다음 
			// 10으로 나눈 몫만을 산출
			result = (result * a) % 10;

		// 결과중 0이 나온 경우 0번째 컴퓨터는 없으므로 10번째 컴퓨터라고 명칭한다.
		if (result == 0)result = 10;

		// 최종 결과 출력
		printf("%ld\n", result);
	}
}

int main()
{
	Result();
	getchar(); getchar();
	return 0;
}