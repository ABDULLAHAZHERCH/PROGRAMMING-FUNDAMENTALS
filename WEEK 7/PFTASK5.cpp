#include <iostream>
using namespace std;
int totalDigits(int);
main()
{
    system("cls");
    int num;
    cout << "Enter A Number";
    cin >> num;
    int result = totalDigits(num);
    cout << result;
}
int totalDigits(int num)
{
    int digits = 0;
    while (num > 0)
    {
        num = num / 10;
        digits++;
    }
    return digits;
}