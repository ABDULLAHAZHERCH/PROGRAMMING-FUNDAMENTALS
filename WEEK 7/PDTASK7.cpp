#include <iostream>
using namespace std;
void divisor(int);
main()
{
    system("cls");
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    divisor(n);
}
void divisor(int n)
{
    int count2 = 0, count3 = 0, count4 = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cout << "Enter Number " << i + 1 << " :";
        cin >> num;
        if (num % 2 == 0)
        {
            count2++;
        }
        if (num % 3 == 0)
        {
            count3++;
        }
        if (num % 4 == 0)
        {
            count4++;
        }
    }
    cout << "p1 = " << (count2 * 100) / n << "%" << endl;
    cout << "p2 = " << (count3 * 100) / n << "%" << endl;
    cout << "p3 = " << (count4 * 100) / n << "%" << endl;
}