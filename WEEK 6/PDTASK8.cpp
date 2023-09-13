#include <iostream>
using namespace std;
string position(int, int, int);
main()
{
    system("cls");
    int h, x, y;
    cout << "Enter value of h : ";
    cin >> h;
    cout << "Enter Value of X-coordinate : ";
    cin >> x;
    cout << "Enter Value of Y-coordinate : ";
    cin >> y;
    string result = position(h, x, y);
    cout << result << endl;
}
string position(int h, int x, int y)
{
    string status;
    if (h <= 0)
    {
        status = " Invalid Input ! ";
        return 0;
    }
    else if (x < 0 || y < 0 || x > 2 * h || y >= 3 * h)
    {
        status = "Outside";
    }
    else if (x % h == 0 || y % h == 0)
    {
        status = "Border";
    }
    else if (x >= h && y >= 0 && x <= 2 * h && y <= 3 * h)
    {
        status = "Inside";
    }
    return status;
}