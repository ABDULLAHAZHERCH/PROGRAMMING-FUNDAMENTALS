#include <iostream>
using namespace std;
void upperTriangle(int);
void lowerTriangle(int);
main()
{
    system("cls");
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    upperTriangle(rows);
    lowerTriangle(rows);
    return 0;
}
void upperTriangle(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void lowerTriangle(int rows)
{
    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < rows - i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}