#include <iostream>
using namespace std;
float Price(float, int);
main()
{
    system("cls");
    float money;
    int year;
    cout << "Enter the Amount : ";
    cin >> money;
    cout << "Enter The year : ";
    cin >> year;
    float result = Price(money, year);
    if (result >= 0)
    {
        cout << "Yes! He will live a carefree life and will have " << result << " dollars left." << endl;
    }
    else
    {
        cout << "NO ! He will need " << (-result) << " dollars to survive." << endl;
    }
}
float Price(float money, int year)
{
    for (int count = 1800; count <= year; count++)
    {
        if (count % 2 == 1)
        {
            money = money - (12000 + (50 * (18 + (count - 1800))));
        }
        else if (count % 2 == 0)
        {
            money = money - 12000;
        }
    }
    return money;
}