#include <iostream>
using namespace std;
void triangle(int);
main()
{
    int rows;
    system("cls");
    cout << "Enter Number of rows : ";
    cin >> rows;
    triangle(rows);
}
void triangle(int rows)
{
    for (int count = rows; count >= 1; count--)
    {
        for (int print = 1; print <= count; print++)
        {
            cout << "*";
        }
        cout << endl;
    }
}