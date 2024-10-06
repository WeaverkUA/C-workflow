#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, K, dig1=1;
    cin >> N >> K;
    cout << "0,";

    for (int i=0; i<K; i++)
    {
        dig1=dig1*10;
        int quotient = dig1/ N;
        cout << quotient;
        dig1 = dig1%N;
    }
    cout << "\n";

    return 0;
}














