#include <iostream>
using namespace std;
float total(string, int);
main()
{
    system("cls");
    string month;
    int stays;
    cout << "Enter Month : ";
    cin >> month;
    cout << "Enter Number of stays : ";
    cin >> stays;
    total(month, stays);
}
float total(string month, int stays)
{
    float studioPrice, apartmentPrice;
    if (month == "may" || month == "october")
    {
        studioPrice = 50;
        apartmentPrice = 65;
    }
    else if (month == "june" || month == "september")
    {
        studioPrice = 75.20;
        apartmentPrice = 68.70;
    }
    else if (month == "july" || month == "august")
    {
        studioPrice = 76.00;
        apartmentPrice = 77.00;
    }
    float studioTotal = stays * studioPrice;
    if (month == "may" || month == "october")
    {
        if (stays > 7 && stays <= 14)
        {
            studioTotal = studioTotal * 0.95;
        }
        if (stays > 14)
        {
            studioTotal = studioTotal * 0.7;
        }
    }
    else if (month == "june" || month == "september")
    {
        if (stays > 14)
        {
            studioTotal = studioTotal * 0.8;
        }
    }
    float apartmentTotal = stays * apartmentPrice;
    if (stays > 14)
    {
        apartmentTotal = apartmentTotal * 0.9;
    }
    cout << "Apartment Total : " << apartmentTotal << " $" << endl;
    cout << "Studio Total : " << studioTotal << "$" << endl;
    return 0;
}