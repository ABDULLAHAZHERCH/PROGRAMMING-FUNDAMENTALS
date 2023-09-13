#include <iostream>
using namespace std;
main()
{
    system("cls");
    int sum = 0;
    for (int count = 1; count <= 100; count++)
    {
        sum = count + sum;
    }
    cout << "Sum is : " << sum;
}