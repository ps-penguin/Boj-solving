#include <iostream>
#include <cstdio>
#include <cmath>
#include <set>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
#include <cstring>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;
typedef long long ll;

ll fast_pow(ll base, ll exp, ll mod) {
    if (base == 1) return 1;

    ll res = 1;
    while (exp) {
        if (exp % 2) {
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll a, b, mod;
    cin >> a >> b >> mod;

    fast_pow(a, b, mod);

    return 0;
}