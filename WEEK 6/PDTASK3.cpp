#include <iostream>
using namespace std;
string zodiac(int, string);
main()
{
    system ("cls");
    int date;
    string month;
    cout << "Enter Date of Birth  : ";
    cin >> date;
    cout << "Enter Month of Birth : ";
    cin >> month;
    string result = zodiac(date, month);
    cout << "Your Zodiac sign is : " << result;
}
string zodiac(int date, string month)
{
    string sign;
    if ((date >= 21 && month == "march") || (date <= 19 && month == "april"))
    {
        sign = "Aries";
    }
    if ((date >= 20 && month == "april") || (date <= 20 && month == "may"))
    {
        sign = "Taurus";
    }
    if ((date >= 21 && month == "may") || (date <= 20 && month == "june"))
    {
        sign = "Gemini";
    }
    if ((date >= 21 && month == "june") || (date <= 22 && month == "july"))
    {
        sign = "Cancer";
    }
    if ((date >= 23 && month == "july") || (date <= 22 && month == "august"))
    {
        sign = "Leo";
    }
    if ((date >= 23 && month == "august") || (date <= 22 && month == "september"))
    {
        sign = "Virgo";
    }
    if ((date >= 23 && month == "september") || (date <= 22 && month == "october"))
    {
        sign = "Libra";
    }
    if ((date >= 23 && month == "october") || (date <= 21 && month == "november"))
        sign = "Scorpio";

    if ((date >= 22 && month == "november") || (date <= 21 && month == "december"))
    {
        sign = "Sagittarius";
    }
    if ((date >= 22 && month == "december") || (date <= 19 && month == "january"))
    {
        sign = "Capricon";
    }
    if ((date >= 20 && month == "january") || (date <= 18 && month == "february"))
    {
        sign = "Aquarius";
    }
    if ((date >= 19 && month == "february") || (date <= 20 && month == "march"))
    {
        sign = "Pisces";
    }
    return sign;
}