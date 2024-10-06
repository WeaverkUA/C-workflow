#include <bits/stdc++.h>

using namespace std;


int nsd(long long m, long long n)
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
    int dig1Bor, dig2Bor, dig1Nik, dig2Nik, up_sum, down_sum;
    cin >> dig1Bor >> dig2Bor >> dig1Nik >> dig2Nik;

    up_sum = dig1Bor * dig2Nik + dig2Bor * dig1Nik;
    down_sum = dig2Bor * dig2Nik;


    up_sum /= nsd(up_sum, down_sum);
    down_sum /= nsd(up_sum, down_sum);

    cout << up_sum << " " << down_sum << "\n";

    return 0;
}











