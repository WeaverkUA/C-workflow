#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N, Rfinal=1, diglongers;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> diglongers;
        Rfinal=Rfinal+diglongers-1;

    }


    cout << Rfinal << "\n";

    return 0;
}















