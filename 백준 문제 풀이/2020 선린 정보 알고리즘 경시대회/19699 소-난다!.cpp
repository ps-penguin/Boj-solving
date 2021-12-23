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
        //고른 수열의 SIZE만큼 FOR문을 돌려서 배열을 추출.
        for (int nIndex = 0; nIndex < picked.size(); ++nIndex)
        {
            sum += input[picked[nIndex]];
        }
        if (isPrime(sum)) {
            result.push_back(sum);
            flag = 1;
        }

        //마지막에 endl을 붙인다.
    }
    //위 코드 조각이 하는 작업을 네개의 조각으로 나눈 뒤, 각 조각에서 하나의 원소를 고르는 것.
    //이렇게 원소들을 고룬 후, 남은 원소들을 고르는 작업을 자기 자신을 호출해 넘기는 재귀함수로 작성. 
    //가장작은 것을 정의한다.
    //배열에 아무것도 없다면 0을
    //있다면 picked란 배열 중 가장 마지막 원소를 추출한다음 +1한 것이 smallest가 된다
    int smallest = picked.empty() ? 0 : picked.back() + 1;
    //next란 함수를 정의한다. next는 smallest로부터 시작해서 n까지 반복문이 실앵된다.
    for (int next = smallest; next < n; next++)
    {
        //picked라는 배열의 끝에 next라는 변수를 추가한다.
        picked.push_back(next);
        //이 과정을 toPick-1을 한 채로 다시 실행한다.
        pick(n, picked, toPick - 1);
        //picked란 배열중 가장 마지막 배열의 원소를 제거한다.
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