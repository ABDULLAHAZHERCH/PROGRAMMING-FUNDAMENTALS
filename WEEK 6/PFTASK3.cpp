#include <iostream>
using namespace std;
string chktitle(int, char);
main()
{
    system("cls");
    int age;
    char gender;
    cout << "Enter your Gender(m,f) : ";
    cin >> gender;
    cout << "Enter your age : ";
    cin >> age;
    string result = chktitle(age, gender);
    cout << result;
}
string chktitle(int age, char gender)
{
    string title;
    if (gender == 'm')
    {
        if (age < 16)
        {
            title = "Master";
        }
        if (age >= 16)
        {
            title = "Mr.";
        }
    }
    else if (gender == 'f')
    {
        if (age < 16)
        {
            title = "Miss";
        }
        if (age >= 16)
        {
            title = "Ms.";
        }
    }
    return title;
}