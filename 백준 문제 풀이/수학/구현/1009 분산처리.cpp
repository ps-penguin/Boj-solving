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

		// ��� ���ڴ� 4��ȯ�ֱ⸶�� 100% ���� ���ڰ� ���´� ( ����ӵ� ���� ��� )
		// ���� �����ϴ� Ƚ���� 4~7�� ���ϼ� �ִ�. 
		b = b % 4 + 4;

		// 2��° �������� b ��° �������� a ���� ���Ѵ�.
		for (int i = 2; i <= b; ++i)
			// ���ϱ� ���ϴµ� �׳� ���ϸ� �и� ���� �ʰ��� �߹Ƿ�
			// ������ ������ ���° ��ǻ�͸� ���ϴ� ���̱� ������ ���� ���� 
			// 10���� ���� ���� ����
			result = (result * a) % 10;

		// ����� 0�� ���� ��� 0��° ��ǻ�ʹ� �����Ƿ� 10��° ��ǻ�Ͷ�� ��Ī�Ѵ�.
		if (result == 0)result = 10;

		// ���� ��� ���
		printf("%ld\n", result);
	}
}

int main()
{
	Result();
	getchar(); getchar();
	return 0;
}