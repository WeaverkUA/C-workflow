#include <bits/stdc++.h>

using namespace std;

int checker(string S)
{
    int balance=0;
    for (int i=0; i<S.size(); i++)
    {
        if (S[i] == '(') balance++;
        if (S[i] == ')') balance--;
        if (balance<0 || balance>2)
        {
            return -1;
        }

    }
    return balance;


}
int main()
{
    string S;
    int balance=0;
    cin >> S;
    balance=checker(S);
        if (balance==-1)
        {
            cout << "ERROR" << "\n";
        }
        else
        {
            if (balance==0)
            {
                cout << "OUTSIDE" << "\n";
            }
            else
            {
                cout << "INSIDE" << "\n";
            }

        }

    return 0;
}










