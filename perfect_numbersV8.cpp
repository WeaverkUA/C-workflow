#include <bits/stdc++.h>

using namespace std;

bool not_rising(int N)
{
    N=abs(N);
    if(N==0)return true;
    long long last = N%10;
    N /= 10;
    while(N%10 >= last)
    {
        last = N%10;
        N/=10;
    }
    if(N==0)
    {
        return true;
    }
    return false;
}

void input_mas(int m[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin >> m[i];
    }
}

int mas[1000000];
int main()
{

    int N;
    bool cnt=true;
    cin >> N;
    input_mas(mas, N);
    for (int i=0; i<N; i++)
    {
        if (not_rising(mas[i]))
        {
            cout << mas[i] << " ";
            cnt=false;
        }
    }
    if (cnt)
    {
        cout << "-1";
    }


    return 0;
}


















