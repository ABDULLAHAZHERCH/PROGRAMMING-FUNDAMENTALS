#include <iostream>
using namespace std;
main()
{
    system("cls");
    string moves[10] = {"Shimmy", "Shake", "Piroutte", "Slide", "BoxStep", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    int num = 0;
    int index;
    cout << "Enter a 4 Digit number : ";
    cin >> num;
    int count[4];
    for (int i = 3; i > -1; i--)
    {
        count[i] = num % 10;
        num = num / 10;
    }
    for (int i = 0; i < 4; i++)
    {
        index = i + count[i];
        if (index > 9)
        {
            index = index - 10;
        }
        cout << moves[index] << " , ";
    }
}