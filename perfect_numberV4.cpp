#include <bits/stdc++.h>
using namespace std;

int PerfectNumber_checker(int number)
{
    int  sum = 1;
    for (int i = 2; i <= sqrt(number); ++i)
        {
        if (number % i == 0)
        {
           sum += (number/i+i);

        }

        }
        return sum == number;
}
void PrintPerfectNumbers(int m[], int N)
{
    int first_Perfect = 0;
    int Perfect_num = 0;

    for (int i = 0; i < N; i++)
    {
        if (PerfectNumber_checker(m[i]))
        {
            Perfect_num = 1;

            if (first_Perfect)
            {
                cout << " " ;
            }
            else
            {
                first_Perfect = 1;
            }
            cout << m[i];
        }
    }

    if (Perfect_num == 0)
    {
        cout << "-1";
    }
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
    int N, mas[10000];
    cin >> N;
    input_mas(mas, N);
    PrintPerfectNumbers(mas,N);
    return 0;
}










