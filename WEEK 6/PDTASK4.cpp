#include <iostream>
using namespace std;
int total(char);
main()
{
    system("cls");
    char type;
    cout << "Enter your Type(Residential=r,R , Premium=p,P) : ";
    cin >> type;
    float result = total(type);
    cout << "Amount : $" << result << endl;
    
}
int total(char type)
{
    float mins, bill;
    if (type == 'r' || type == 'R')
    {
        cout << "Enter minutes used: ";
        cin >> mins;

        if (mins <= 50)
        {
            bill = 10.00;
        }
        else
        {
            bill = 10.00 + ((mins - 50) * 0.20);
        }

        cout << "Regular service" << endl;
        cout << "Minutes used: " << mins << endl;
        return bill;
    }
    else if (type == 'p' || type == 'P')
    {
        float Dmins, Nmins, bill;
        char time;
        cout << "Enter minutes used during the day: ";
        cin >> Dmins;
        cout << "Enter minutes used during the night: ";
        cin >> Nmins;

        cout << "Enter d or D for day and n or N for night: ";
        cin >> time;

        if (time == 'd' || time == 'D')
        {
            if (Nmins <= 75)
            {
                bill = 25.00;
            }
            else
            {
                bill = 25.00 + (Dmins - 75) * 0.10;
            }
        }
        else if (time == 'n' || time == 'N')
        {
            if (Nmins <= 100)
            {
                bill = 25.00;
            }
            else
            {
                bill = 25.00 + (Nmins - 100) * 0.05;
            }
        }
        else
        {
            cout << "Invalid input" << endl;
        }

        cout << "Premium service" << endl;
        cout << "Minutes used: " << (Dmins + Nmins) << endl;
        return bill;
    }
    if (type != 'r' && type != 'R' && type != 'p' && type != 'P')
    {
        cout << "Invalid input" << endl;
    }
}