#include <iostream>
using namespace std;
main()
{
    system("cls");
    int num;
    cout << "Enter A number " << endl;
    cin >> num;
    for (int count = 1; count <= 10; count = count + 1)
    {
        cout << num << "*" << count << " = " << count * num << endl;
    }
}