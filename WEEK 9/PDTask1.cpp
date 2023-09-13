#include <iostream>
using namespace std;
main()
{
    system("cls");
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    int kg, total;
    string fru;
    cout << "Enter Name of fruit : ";
    cin >> fru;
    cout << "Enter Quantity in kgs : ";
    cin >> kg;
    for (int i = 0; i < 5; i++)
    {
        if (fru == fruit[i])
        {
            total = kg * price[i];
        }
    }
    cout << "Total price is : " << total;
}