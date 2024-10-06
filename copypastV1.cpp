#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N;
    int amount=10;
    cin >> N;
    for (int i=1; i<=amount; i++)
    {
        N=N+123;
        N=N/12;
        N=N+145;
        N=N*33;
        N=N-15;
    }
    cout << N << "\n";
    return 0;
}










