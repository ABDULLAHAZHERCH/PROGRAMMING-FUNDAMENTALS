#include <iostream>
using namespace std;
float saving(int, float, int);
main()
{
    system("cls");
    int age;
    float price;
    int toy;
    cout << "Enter Your age : ";
    cin >> age;
    cout << "Enter Price of Washing machine : ";
    cin >> price;
    cout << "Enter unit Toy Price : ";
    cin >> toy;
    float result = saving(age, price, toy);
    if (result >= price)
    {
        cout << "Yes! " << endl;
        cout << (result - price) << endl;
    }
    else
    {
        cout << "No! " << endl;
        cout << (price - result) << endl;
    }
}
float saving(int age, float price, int toy)
{
    float money = 0;
    int gift = 10;
    float even = 0;
    for (int count = 1; count <= age; count++)
    {
        if (count % 2 == 0)
        {
            money = money + gift;
            even++;
            gift = gift + 10;
        }
        else
        {
            money = money + toy;
        }
    }
    return (money - even);
}