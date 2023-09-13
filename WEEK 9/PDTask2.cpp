#include <iostream>
using namespace std;
main()
{
    system("cls");
    string movies[5] = {"gladiator", "starwars", "terminator", "takinglives", "tombrider"};
    string movie;
    int total = 0;
    cout << "Enter Movie name : ";
    cin >> movie;
    for (int i = 0; i < 5; i++)
    {
        if (movie == movies[i])
        {
            if (i % 2 == 0)
            {
                total = 500 * 0.9;
            }
            else
            {
                total = 500 * 0.95;
            }
        }
    }
    cout << "Total is : " << total;
}