#include <iostream>
using namespace std;
int triangle(int);
main()
{
    system("cls");
    int num;
    cout << "Enter an integer : ";
    cin >> num;
    cout << triangle(num);
}
int triangle(int num)
{
    int dots = 0;
    for (int i = 1; i <= num; i++)
    {
        dots = dots + i;
    }
    return dots;
}