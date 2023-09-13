#include <iostream>
using namespace std;
int gcd(int, int);
int lcm(int, int);
main()
{
    system("cls");
    int num1, num2;
    cout << "Enter First Number : ";
    cin >> num1;
    cout << "Enter Second Number : ";
    cin >> num2;
    int result1 = gcd(num1, num2);
    int result2 = lcm(num1, num2);
    cout << "Highest Common Factor of  " << num1 << " and " << num2 << " is : " << result1 << endl;
    cout << "Lowest Common Multiple of " << num1 << " and " << num2 << " is : " << result2 << endl;
}
int gcd(int num1, int num2)
{
    int hcf = 0;
    if (num2 == 0)
    {
        return num1;
    }
    if (num1 == 0)
    {
        return num2;
    }
    else if (num1 > num2)
    {
        for (int count = 1; count <= num2; count++)
        {
            if (num1 % count == 0 && num2 % count == 0)
            {
                hcf = count;
            }
        }
    }
    else if (num1 < num2)
    {
        for (int count = 1; count <= num1; count++)
        {
            if (num1 % count == 0 && num2 % count == 0)
            {
                hcf = count;
            }
        }
    }
    return hcf;
}
int lcm(int num1, int num2)
{
    return (num1 * num2) / gcd(num1, num2);
}