#include <iostream>
using namespace std;
float total(string, string, float);
main()
{
    system("cls");
    string fruit, day;
    float quantity;
    cout << "Enter fruit (banana, apple, orange, grapefruit, kiwi, pineapple, grapes) : ";
    cin >> fruit;
    cout << "Enter day of the week (Monday,.....) : ";
    cin >> day;
    cout << "Enter quantity : ";
    cin >> quantity;
    float result = total(fruit, day, quantity);
    cout << "Price: " << result <<"$"<< endl;
}
float total(string fruit, string day, float quantity)
{
    float price;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (fruit == "banana")
        {
            price = 2.50 * quantity;
        }
        else if (fruit == "apple")
        {
            price = 1.20 * quantity;
        }
        else if (fruit == "orange")
        {
            price = 0.85 * quantity;
        }
        else if (fruit == "grapefruit")
        {
            price = 1.45 * quantity;
        }
        else if (fruit == "kiwi")
        {
            price = 2.70 * quantity;
        }
        else if (fruit == "pineapple")
        {
            price = 5.50 * quantity;
        }
        else if (fruit == "grapes")
        {
            price = 3.85 * quantity;
        }
        else
        {
            cout << "Invalid fruit" << endl;
            return 0;
        }
    }
    else if (day == "Saturday" || day == "Sunday")
    {
        if (fruit == "banana")
        {
            price = 2.70 * quantity;
        }
        else if (fruit == "apple")
        {
            price = 1.25 * quantity;
        }
        else if (fruit == "orange")
        {
            price = 0.90 * quantity;
        }
        else if (fruit == "grapefruit")
        {
            price = 1.60 * quantity;
        }
        else if (fruit == "kiwi")
        {
            price = 3.00 * quantity;
        }
        else if (fruit == "pineapple")
        {
            price = 5.60 * quantity;
        }
        else if (fruit == "grapes")
        {
            price = 4.20 * quantity;
        }
        else
        {
            cout << "Invalid fruit" << endl;
            return 0;
        }
    }
    else
    {
        cout << "Invalid day" << endl;
        return 0;
    }
    return price;
}