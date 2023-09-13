#include <iostream>
using namespace std;
void cargo(int);
main()
{
    system("cls");
    int n;
    cout << "Count of Cargo : ";
    cin >> n;
    cargo(n);
}
void cargo(int n)
{
    float totalWeight = 0;
    float totalPrice = 0;
    float minibus = 0;
    float truck = 0;
    float train = 0;
    for (int i = 0; i < n; i++)
    {
        int weight;
        cout << "Enter weight of Cargo " << i + 1 << " : ";
        cin >> weight;
        totalWeight = totalWeight + weight;
        if (weight <= 3)
        {
            minibus = minibus + weight;
            totalPrice = totalPrice + weight * 200;
        }
        else if (weight <= 11)
        {
            truck = truck + weight;
            totalPrice = totalPrice + weight * 175;
        }
        else
        {
            train = train + weight;
            totalPrice = totalPrice + weight * 120;
        }
    }
    cout << "Average price per ton of carried cargo : " << totalPrice / totalWeight << endl;
    cout << "Percentage of the cargo by minibus : " << (minibus / totalWeight) * 100 << "%" << endl;
    cout << "Percentage of the cargo by truck : " << (truck / totalWeight) * 100 << "%" << endl;
    cout << "Percentage of the cargo by train : " << (train / totalWeight) * 100 << "%" << endl;
}