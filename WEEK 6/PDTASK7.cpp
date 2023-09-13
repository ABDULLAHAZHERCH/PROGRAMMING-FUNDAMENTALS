#include <iostream>
using namespace std;
int time(int, int, int, int);
main()
{
    system("cls");
    int examHour, examMinute, arrivalHour, arrivalMinute;
    cout << "Enter Starting hour : ";
    cin >> examHour;
    cout << "Enter Starting minute : ";
    cin >> examMinute;
    cout << "Enter Student Arrival hour : ";
    cin >> arrivalHour;
    cout << "Enter Student Arrival minute : ";
    cin >> arrivalMinute;
    time(examHour, examMinute, arrivalHour, arrivalMinute);
}
int time(int examHour, int examMinute, int arrivalHour, int arrivalMinute)
{
    int examTime = (examHour * 60) + examMinute;
    int arrivalTime = (arrivalHour * 60) + arrivalMinute;
    int difference = arrivalTime - examTime;
    if (difference < -30)
    {
        cout << "The student is early by : ";
        difference = -difference;
    }
    else if (difference <= 0)
    {
        cout << "The student is on time : ";
        difference = -difference;
    }
    else
    {
        cout << "The student is late by : ";
    }
    int hours = difference / 60;
    int minutes = difference % 60;
    if (hours > 0)
    {
        cout << hours << " hour(s) : " << minutes << " minute(s)." << endl;
    }
    else
    {
        cout << minutes << " minute(s)." << endl;
    }
    return 0;
}