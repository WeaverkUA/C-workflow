#include <bits/stdc++.h>

using namespace std;

long long nsd(long long m, long long n)
{
    m=abs(m);
    n=abs(n);
    while(n!=0 && m!=0)
    {
        if(n>m) n=n%m;
        else m=m%n;
    }
    return n + m;

}

int main()
{
    long long N, num;
    cin >> N;

    long long Rfinal;
    cin >> Rfinal;
    Rfinal=abs(Rfinal);
    for (int i = 1; i < N; i++)
    {

        cin >> num;
        num=abs(num);
        Rfinal = Rfinal*(num/nsd(Rfinal, num));
    }

    cout << Rfinal << "\n";
    return 0;
}













