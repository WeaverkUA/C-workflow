#include <bits/stdc++.h>

using namespace std;

bool prime(int n)
{
    n=abs(n);
    if (n==1) return false;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i==0) return false;
    }
    return true;

}
int main()
{
    int N, dig;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        cin >> dig;
        bool restest=prime(dig);
        if (restest==false)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
        }
    }

    return 0;
}










