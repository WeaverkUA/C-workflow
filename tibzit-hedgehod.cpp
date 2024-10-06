#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, total_loss=0, daily_loss;
    cin >> N;
    for (int i=1; i<=N; i++)
    {
        cin >> daily_loss;
        total_loss+=daily_loss;
    }
    cout << total_loss << "\n";
    return 0;
}










