#include <bits/stdc++.h>


using namespace std;

int cnt_dig(int num)
{
    int cnt = 0;
    num=abs(num);
    while(num!=0)
    {
        num /= 10;
        cnt++;
    }

    if(cnt==0)
    {
       return 1;
    }
    return cnt;

}


bool dig_checker(int num)
{
    int n = 0, Rpart = 0, Lpart = 0;
    n=cnt_dig(num);
    if(n%2!=0)
        {
            return false;
        }



     for (int i = 0; i < n / 2; i++)
     {
         Rpart += num % 10;
         num /= 10;
     }

     while (num > 0)
     {
         Lpart += num % 10;
         num /= 10;
     }

     if (Rpart == Lpart)
     {
         return true;
     }
     else
     {
         return false;
     }


}




int Happy_number_checker(int m[], int N)
{
    for(int i=0; i<N; i++)
    {
        if(dig_checker(m[i]))
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

int mas[10000000];
int main()
{

    int N;
    cin >> N;
    input_mas(mas, N);
    int Rfinal=Happy_number_checker(mas, N);
    if (Rfinal==-1)
    {
        cout << Rfinal;
    }
    else
    {
        cout << mas[Rfinal] << " " << Rfinal+1;
    }


    return 0;
}


















