#include <iostream>
using namespace std;
main()
{
    system("cls");
    string dig[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter Digit : ";
        cin >> dig[i];
    }
    if (dig[0] == dig[1] && dig[1] == dig[2] && dig[2] == dig[3])
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}