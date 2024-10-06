#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, allsquares=0;
    cin >> A >> B;
    while(A>0 && B>0)
    {
        if(A>B)
        {
            allsquares+=A/B;
            A%=B;
        }
        else
        {
            allsquares+=B/A;
            B%=A;
        }
    }
    cout << allsquares << "\n";
    return 0;
}














