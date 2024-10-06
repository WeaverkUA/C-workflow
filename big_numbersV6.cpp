#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, dig6 = 0, dig7 = 0, difference, Rfinal, minzeros;
    cin >> n >> m;

    difference=max(n, m)-min(n, m);
    if (n>m)
    {
        minzeros=m;
        n=pow(10, difference);
        m=1;
    }
    else
    {
        minzeros=n;
        n=1;
        m=pow(10, difference);
    }
    Rfinal = (n - m);


    cout << Rfinal;
    for (int i=0; i<minzeros; i++)
    {
        if (Rfinal!=0)
        {
            cout << "0";
        }
    }

    return 0;
}















