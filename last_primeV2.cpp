#include <bits/stdc++.h>


using namespace std;


bool prime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}



int last_prime(int m[], int n)
{
    for(int i=n-1; i>=0; i--)
    {
        if(prime(m[i]))
        {
            return i;
        }
    }
    return -1;
}



void input_mas(int m[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin >> m[i];
    }
}



int main()
{

    int N;
    cin >> N;
    int mas[N];
    input_mas(mas, N);
    if (last_prime(mas, N)==-1)
    {
        cout << last_prime(mas, N);
    }
    else
    {
        cout << mas[last_prime(mas, N)] << " " << last_prime(mas, N)+1;
    }


    return 0;
}
















