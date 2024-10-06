#include <bits/stdc++.h>

using namespace std;

int count_nsd(int n)
{
    int cnt=0, dig, Rfinal=0;
    n=abs(n);
    while(n>0)
    {
        dig=n%10;
        cnt++;
        n=n/10;
        Rfinal+=dig;
    }
    return Rfinal;
}

int main()
{
    int NSKfinal, N;
    cin >> N;
    NSKfinal=count_nsd(N);
    cout << NSKfinal << "\n";
    return 0;
}










