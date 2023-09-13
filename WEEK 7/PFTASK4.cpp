#include <iostream>
using namespace std;
void series(int);
main()
{
    system("cls");
    int num;
    cout << "Enter length of series";
    cin >> num;
    series(num);
}
void series(int num)
{
    int no1 = 0;
    int no2 = 1;
    int number = 0;
    for (int count = 0; count <= num; count = count + 1)
    {
        cout << number << endl;
        number = no1 + no2;
        no1 = no2;
        no2 = number;
    }
}