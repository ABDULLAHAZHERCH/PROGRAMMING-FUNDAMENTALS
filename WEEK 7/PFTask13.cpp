#include <iostream>
using namespace std;
void printPercentage(int number);
main()
{
    system("cls");
    int number;
    cout << "Enter an Integer : ";
    cin >> number;
    printPercentage(number);
}
void printPercentage(int number)
{
    int num;
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    for (int i = 0; i < number; i++)
    {
        cout << "Enter a number : ";
        cin >> num;
        if (num < 200)
        {
            p1++;
        }
        else if (num >= 200 && num < 400)
        {
            p2++;
        }
        else if (num >= 400 && num < 600)
        {
            p3++;
        }
        else if (num >= 600 && num < 800)
        {
            p4++;
        }
        else
        {
            p5++;
        }
    }
    cout << p1 / number * 100 << "%" << endl;
    cout << p2 / number * 100 << "%" << endl;
    cout << p3 / number * 100 << "%" << endl;
    cout << p4 / number * 100 << "%" << endl;
    cout << p5 / number * 100 << "%" << endl;
}