#include <iostream>
using namespace std;
float discount(float, string, string);
main()
{
    system("cls");
    float price;
    string month, day;
    cout << "Enter Total Amount : ";
    cin >> price;
    cout << "Enter Month : ";
    cin >> month;
    cout << "Enter Day : ";
    cin >> day;
    float result = discount(price, day, month);
    cout << result;
}
float discount(float price, string day, string month)
{
    float total;
    if (day == "sunday")
    {
        if (month == "october" || month == "march" || month == "august")
        {
            total = price * 0.9;
        }
    }
    else if (day == "monday")
    {
        if (month == "november" || month == "december")
        {
            total = price * 0.95;
        }
    }
    else
    {
        total=price;
    }
    return total;
}