#include <iostream>
using namespace std;
string result(float, float);
main()
{
    system("cls");
    string name;
    float english, math, chemy, social, biology;
    cout << "Enter Student name         : ";
    cin >> name;
    cout << "Enter English marks        : ";
    cin >> english;
    cout << "Enter Math marks           : ";
    cin >> math;
    cout << "Enter Chemistry marks      : ";
    cin >> chemy;
    cout << "Enter Social Science marks : ";
    cin >> social;
    cout << "Enter Biology marks        : ";
    cin >> biology;
    float total = english + chemy + math + social + biology;
    float percent = (total / 5);
    string end = result(total, percent);
    cout << name << endl;
    cout << "Total marks : " << total << endl;
    cout << "Percentage is : " << percent << " %" << endl;
    cout << "Your Grade is :" << end << endl;
}
string result(float total, float percent)
{
    string grade;
    if (percent <= 100 && percent >= 91)
    {
        grade = "A+";
    }
    if (percent <= 90 && percent >= 81)
    {
        grade = "A";
    }
    if (percent <= 80 && percent >= 71)
    {
        grade = "B+";
    }
    if (percent <= 70 && percent >= 61)
    {
        grade = "B";
    }
    if (percent <= 60 && percent >= 51)
    {
        grade = "C";
    }
    if (percent <= 50 && percent >= 41)
    {
        grade = "D";
    }
    if (percent < 40)
    {
        grade = "F";
    }
    return grade;
}