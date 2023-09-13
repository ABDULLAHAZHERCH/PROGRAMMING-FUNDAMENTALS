#include <iostream>
using namespace std;
main()
{
    system("cls");
    int size;
    int dig[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter A Digit : ";
        cin >> dig[i];
    }
    cout << "Enter no. of times even-odd transformation needs to be done : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (dig[i] % 2 == 0)
            {
                dig[i] = dig[i] - 2;
            }
            else if (dig[i] % 2 == 1)
            {
                dig[i] = dig[i] + 2;
            }
        }
    }
    cout << "{ " << dig[0] << "," << dig[1] << "," << dig[2] << " }";
}