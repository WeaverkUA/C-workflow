#include <bits/stdc++.h>

using namespace std;


void decomposition(int n)
{
    for (int i = 2; i * i <= n; i++)
        {
        while (n % i == 0)
        {
            cout << i << "*";
            n=n/i;
        }
    }
    if (n>1)
    {
        cout << n;
    }
}

int main()
{
    int dig;
    cin >> dig;

    decomposition(dig);

    return 0;
}















