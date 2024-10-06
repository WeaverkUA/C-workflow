#include <bits/stdc++.h>

using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
bool isValidDate(int day, int month, int year)
{
    if (year < 2000 || year > 2099)
    {
        return false;
    }

    if (month < 1 || month > 12)
    {
        return false;
    }

    int daysInMonth = 31;

    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        daysInMonth = 30;
    }
    else
    {
        if (isLeapYear(year))
        {
            daysInMonth = 29;
        }
        else
        {
            daysInMonth = 28;
        }
    }

    return true;
}

int main()
{
    for (int i = 0; i < 5; i++)
        {
        int day, month, year;
        cin >> day >> month >> year;
        if (isValidDate(day, month, year))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
