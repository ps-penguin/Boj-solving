#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int flag = 0;
int input[10];
vector<int> result;
int count;

int isPrime(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cnt++;
    }
    if (cnt == 2)
        return 1;
    else return 0;
}

void pick(int n, vector<int>& picked, int toPick)
{

    if (toPick == 0)
    {
        int sum = 0;
        //�� ������ SIZE��ŭ FOR���� ������ �迭�� ����.
        for (int nIndex = 0; nIndex < picked.size(); ++nIndex)
        {
            sum += input[picked[nIndex]];
        }
        if (isPrime(sum)) {
            result.push_back(sum);
            flag = 1;
        }

        //�������� endl�� ���δ�.
    }
    //�� �ڵ� ������ �ϴ� �۾��� �װ��� �������� ���� ��, �� �������� �ϳ��� ���Ҹ� ���� ��.
    //�̷��� ���ҵ��� ��� ��, ���� ���ҵ��� ���� �۾��� �ڱ� �ڽ��� ȣ���� �ѱ�� ����Լ��� �ۼ�. 
    //�������� ���� �����Ѵ�.
    //�迭�� �ƹ��͵� ���ٸ� 0��
    //�ִٸ� picked�� �迭 �� ���� ������ ���Ҹ� �����Ѵ��� +1�� ���� smallest�� �ȴ�
    int smallest = picked.empty() ? 0 : picked.back() + 1;
    //next�� �Լ��� �����Ѵ�. next�� smallest�κ��� �����ؼ� n���� �ݺ����� �Ǿ޵ȴ�.
    for (int next = smallest; next < n; next++)
    {
        //picked��� �迭�� ���� next��� ������ �߰��Ѵ�.
        picked.push_back(next);
        //�� ������ toPick-1�� �� ä�� �ٽ� �����Ѵ�.
        pick(n, picked, toPick - 1);
        //picked�� �迭�� ���� ������ �迭�� ���Ҹ� �����Ѵ�.
        picked.pop_back();
    }
}


int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    pick(n, v, m);
    sort(result.begin(), result.end());
    if (result.empty()) {
        cout << -1;
        return 0;
    }
    cout << result[0] << ' ';
    for (int i = 1; i < result.size(); i++) {
        if (result[i] != result[i - 1])
            cout << result[i] << ' ';
    }
    return 0;
}