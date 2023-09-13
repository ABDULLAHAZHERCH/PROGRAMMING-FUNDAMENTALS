#include <iostream>
using namespace std;
main()
{
    system("cls");
    string word;
    string result;
    cout << "Enter a word :";
    cin >> word;
    if (word.length() % 2 == 0)
    {
        result = "True";
    }
    else
    {
        result = "False";
    }
    cout << result;
}