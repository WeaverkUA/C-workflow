#include <bits/stdc++.h>

using namespace std;

int nsd(int m, int n)
{
    while(n!=0 && m!=0)
    {
        if(n>m) n=n%m;
        else m=m%n;
    }
    return n+m;

}

int main()
{
    int N;
    cin >> N;

    int Rfinal;
    cin >> Rfinal;

    for (int i = 1; i < N; i++)
    {
        int num;
        cin >> num;
        Rfinal = nsd(Rfinal, num);
    }

    cout << Rfinal << "\n";
    return 0;
}













