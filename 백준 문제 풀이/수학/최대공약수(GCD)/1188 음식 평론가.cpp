#include <iostream>

using namespace std;

//최대 공약수
int GCD(int a, int b)
{
    if (a % b == 0)
        return b;
    return GCD(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    cout << M - GCD(N, M) << "\n";
    return 0;
}
