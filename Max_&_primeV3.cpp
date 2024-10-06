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

int max_elem(int m[], int N)
{
    int etalon=0;
    for(int i =1; i<N; i++)
    {
        if(m[i]>m[etalon])
        {
            etalon=i;
        }
    }
    return etalon;

}

int first_prime(int m[], int n)
{
    for(int i=0; i<n; i++)
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


void output_mas(int m[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << m[i] << " ";
    }
    cout << "\n";
}


int main()
{

    int N;
    cin >> N;
    int mas[N];
    input_mas(mas, N);
    swap(mas[abs(first_prime(mas[N], N))], mas[(mas[N], N)]);
    if (Rfinal_prime!=-1)
    {
        cout << output_mas(mas, N);
    }
    else
    {
        cout << "-1";
    }

return 0;
}

















