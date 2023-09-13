#include <iostream>
using namespace std;
main()
{
    system("cls");
    int size;
    cout << "Enter Number of squares you want to colour : ";
    cin >> size;
    string color[size];
    int total = 0, count = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter colour : ";
        cin >> color[i];

        if (color[i] != color[(i - 1)])
        {
            count++;
        }
    }
    total = count + (size * 2) - 1;
    cout << total;
}