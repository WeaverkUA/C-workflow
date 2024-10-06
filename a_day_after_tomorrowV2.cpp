#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using namespace std;


bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year)
{
    if (month == 2)
        {
        if (isLeapYear(year))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            return 30;
        }
        else
        {
            return 31;
        }
    }

}


void getNextDate(int& day, int& month, int& year)
{
    day += 2;
    if (day > daysInMonth(month, year))
    {
        day = 1;
        month++;
        if (month > 12)
        {
            month = 1;
            year++;
        }
    }
}

int main()
{
    int day, month, year;
    cin >> day >> month >> year;
    getNextDate(day, month, year);
    cout << day << " " << month << " " << year << "\n";

    return 0;
}





















