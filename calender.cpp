#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int dayweek(int y,int m,int d)
{
    static int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
    if(m<3)
        y-=1;
    return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
bool isleap(int year)
{
    return (year%4==0 && year%100!=0) || (year%400==0);
}
void printCalendar(int year)
{
    cout << "Calendar for the year: " << year << endl << endl;
    string months[] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(isleap(year))
        daysInMonth[1] = 29;

    for(int month = 0; month < 12; month++)
    {
        cout << "     " << months[month] << " " << year << endl;
        cout << "Su Mo Tu We Th Fr Sa" << endl;

        int firstDay = dayweek(year, month + 1, 1);
        for(int i = 0; i < firstDay; i++)
            cout << "   ";

        for(int day = 1; day <= daysInMonth[month]; day++)
        {
            cout << setw(2) << day << " ";
            if((firstDay + day) % 7 == 0)
                cout << endl;
        }
        cout << endl << endl;
    }
}
int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    printCalendar(year);
    return 0;
}