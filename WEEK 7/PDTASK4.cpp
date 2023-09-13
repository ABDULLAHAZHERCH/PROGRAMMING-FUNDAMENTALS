#include <iostream>
using namespace std;
void Sequence(int);
main()
{
    system("cls");
    int num;
    cout << "Enter the higher bound of the sequence: ";
    cin >> num;
    Sequence(num);
    return 0;
}
void Sequence(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (i % 4 == 0)
        {
            cout << i * 10 << " ";
        }
        else
        {
            cout << i << " ";
        }
    }
    cout << endl;
}