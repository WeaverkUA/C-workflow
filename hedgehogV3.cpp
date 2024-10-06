#include <bits/stdc++.h>

using namespace std;

int nsd(long long m, long long n)
{
    n=abs(n);
    m=abs(m);
    while(n!=0 && m!=0)
    {
        if(n>m) n=n%m;
        else m=m%n;
    }
    return n+m;

}

int main()
{
    long long N, M, Rfinal;
    cin >> N >> M;

    Rfinal = M*(N/nsd(M, N));

    cout << Rfinal << "\n";
    return 0;
}
















