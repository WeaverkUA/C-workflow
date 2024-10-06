#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int taxisNeeded = 0, groupOne = 0, groupTwo = 0, groupThree = 0, groupFour = 0, groupSize;

    for (int i = 0; i < N; i++)
    {
        cin >> groupSize;
        if (groupSize == 1)
        {
            groupOne++;
        }
        else if (groupSize == 2)
        {
            groupTwo++;
        }
        else if (groupSize == 3)
        {
            groupThree++;
        }
        else if (groupSize == 4)
        {
            groupFour++;
        }
    }

    taxisNeeded += groupFour;
    taxisNeeded += groupThree;

    if (groupOne > groupThree)
    {
        groupOne -= groupThree;
    }
    else
    {
        groupOne = 0;
    }

    taxisNeeded += (groupTwo * 2 + groupOne + 3) / 4;

    cout << taxisNeeded << "\n";

    return 0;
}














