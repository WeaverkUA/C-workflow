#include <bits/stdc++.h>

using namespace std;


long long fibonachisum(int n)
{
    if (n<=0) return 0;

    long long num1=0, num2=1, num3=1, allsum=1;;

    for (int i=2; i<=n; i++)
    {
        num3=(num1+num2)%1000000007;
        allsum = (allsum + num3 *num3) % 1000000007;
        num1=num2;
        num2=num3;
    }
    return allsum;
}


int main()
{

    int N;
    cin >> N;
    cout << fibonachisum(N) << "\n";

    return 0;
}














