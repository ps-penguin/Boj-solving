#include <bits/stdc++.h>
#include <iostream>


#define MAX 50000000
using namespace std;
bool c[MAX] = { false, };
int count = 0;

void eratostenes()
{
    for (int i = 2; i <= sqrt(MAX); i++)
    {
        if (c[i] == false)
        {
            for (int j = i + i; j <= MAX; j += i)
            {
                c[j] = true;
            }
        }
    }
}
int main()
{
    int k;
    cin >> k;
    int check = 0;
    eratostenes();
    for (int i = 2; i <= MAX; i++) {
        if (!c[i])
            check++;
        if (check == k)
        {
            cout << i;
            break;
        }
    }
}
