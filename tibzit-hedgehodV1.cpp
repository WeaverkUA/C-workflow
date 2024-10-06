#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, totalA=0, totalB=0, totalC=0;
    char type;
    cin >> N;
    for (int i=1; i<=N; i++)
    {
        cin >> type;
        if (type == 'a') totalA++;
        if (type == 'b') totalB++;
        if (type == 'c') totalC++;
    }
    cout << totalA << ' ' << totalB << ' ' << totalC << "\n";
    return 0;
}










