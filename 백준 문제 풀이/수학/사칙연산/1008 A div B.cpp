#include <cstdio>
int main()
{
    int a, b;
    double mok;
    scanf_s("%d %d", &a, &b);
    mok = (double)a / b;
    printf("%.9f", mok);
}