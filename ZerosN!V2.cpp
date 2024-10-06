#include <bits/stdc++.h>

using namespace std;

int countTrailingZeros(int n)
{
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
    {
        count += n / i;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    int result = countTrailingZeros(n);
    cout << result << endl;

    return 0;
}















