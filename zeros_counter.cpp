
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using namespace std;

int cnt_zeros(int n)
{
    int cnt=0, dig;
    n=abs(n);
    while(n%10==0)
    {
        dig=n%10;
        n=n/10;
    }
    while (n!=0)
    {
        if(n%10==0)
        {
            cnt++;
        }
        n=n/10;
    }
    return cnt;
}

int main()
{
    int N, zerosfinal;
    cin >> N;
    zerosfinal=cnt_zeros(N);
    cout << zerosfinal << "\n";
    return 0;
}










