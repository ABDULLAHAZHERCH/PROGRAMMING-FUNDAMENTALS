#include <iostream>
using namespace std;
void shape(int);
main()
{
    system("cls");
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    shape(rows);
}
void shape(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}