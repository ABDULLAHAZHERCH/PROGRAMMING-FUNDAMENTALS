#include <iostream>
using namespace std;
main()
{
    system("cls");
    string one, two;
    int result;
    int count = 0;
    cout << "Enter Word 1 : ";
    cin >> one;
    cout << "Enter Word 2 : ";
    cin >> two;
    for (int i = 0; i < one.length() && i < two.length(); i++)
    {
        if (one[i] == two[i])
        {
            count++;
        }
    }
    cout << count;
}