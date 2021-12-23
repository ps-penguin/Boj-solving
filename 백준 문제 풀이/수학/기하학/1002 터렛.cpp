#include <string.h>
#include <iostream>
#include <algorithm>
#include <math.h>
typedef long long ll;

using namespace std;
int main()
{
    int T;
    int distance;
    cin >> T;
    ll x1, x2, y1, y2, r1, r2;
    for (int i = 0; i < T; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        ll dx = x1 - x2;
        ll dy = y1 - y2;
        if (r1 > r2)
            swap(r1, r2);
        ll add = r1 + r2;
        add = add * add;
        ll sub = r2 - r1;
        sub = sub * sub;
        ll distance = dx * dx + dy * dy;
        if (distance<add && distance>sub)
            cout << 2;
        else if (distance == add)
            cout << 1;
        else if (distance == sub && distance != 0)
            cout << 1;
        else if (distance<sub || distance>add)
            cout << 0;
        else
            cout << -1;
        cout << '\n';
    }
    return 0;
}
