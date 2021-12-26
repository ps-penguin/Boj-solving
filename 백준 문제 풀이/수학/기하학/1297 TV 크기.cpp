#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int D, H, W;
    double diagonal, a, b;
    cin >> D >> H >> W;
    diagonal = sqrt(H * H + W * W);
    a = H * D / diagonal;
    b = W * D / diagonal;

    cout << int(a) << " " << int(b);
}