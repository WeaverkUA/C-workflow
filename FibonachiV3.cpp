#include <bits/stdc++.h>

using namespace std;

long long fibonachi(int N)
{
    long long dig1=1, dig2=1, digN;
    for(int i=3; i<=N; i++)
    {
        digN=(dig1+dig2)%100000;
        dig1=dig2;
        dig2=digN;
    }
    return dig2%10;
}

int main()
{
    int N;
    cin >> N;
    for (int i = N-1; i < N; i++)
    {
        cout << fibonachi(N) << "\n";
    }
    return 0;
}














