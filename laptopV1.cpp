#include <bits/stdc++.h>

using namespace std;


int main()
{
    int houseL, houseH, houseW;
    int laptopL, laptopH, laptopW;

    cin >> houseL >> houseH >> houseW;
    cin >> laptopL >> laptopH >> laptopW;

    int maxCountLength = houseL / laptopL;
    int maxCountHeight = houseH / laptopH;
    int maxCountWidth = houseW / laptopW;

    int totalLaptops = maxCountLength * maxCountHeight * maxCountWidth;

    cout << totalLaptops << "\n";

    return 0;
}











