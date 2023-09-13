#include <iostream>
using namespace std;
main()
{
    system("cls");
    string result;
    int size = 0;
    cout << "Enter size of array : ";
    cin >> size;
    int nums[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Number : ";
        cin >> nums[i];
    }
    for (int j = 0; j < size; j++)
    {
        if ((nums[j] == 7) || (nums[j] % 10 == 7) || (nums[j] / 10 == 7))
        {
            result = "BOOM !";
        }
        else
        {
            result = "There is no 7";
        }
    }
    cout << result;
}