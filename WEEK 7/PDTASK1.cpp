#include <iostream>
using namespace std;
void triangle(int);
main()
{
    system("cls");
    int rows;
    cout << "Enter Number of rows : ";
    cin >> rows;
    triangle(rows);
}
void triangle(int rows)
{
    for (int count = 1; count <= rows; count++)
    {
        for (int print = 1; print <= count; print++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
