#include <iostream>
using namespace std;
void english();
int number;
main()
{
    cout << "Enter a 2 Digit Number : ";
    cin >> number;
    english();
}
void english()
{
    int first_digit = (number / 10);
    int second_digit = (number % 10);
    if (first_digit == 2)
    {
        cout << "Your number is Twenty ";
    }
    if (first_digit == 3)
    {
        cout << "Your number is Thirty ";
    }
    if (first_digit == 4)
    {
        cout << "Your number is Forty ";
    }
    if (first_digit == 5)
    {
        cout << "Your number is Fifty ";
    }
    if (first_digit == 6)
    {
        cout << "Your number is Sixty ";
    }
    if (first_digit == 7)
    {
        cout << "Your number is Seventy ";
    }
    if (first_digit == 8)
    {
        cout << "Your number is Eighty ";
    }
    if (first_digit == 9)
    {
        cout << "Your number is Ninety ";
    }
    if (second_digit == 1)
    {
        cout << "One";
    }
    if (second_digit == 2)
    {
        cout << "Two";
    }
    if (second_digit == 3)
    {
        cout << "Three";
    }
    if (second_digit == 4)
    {
        cout << "Four";
    }
    if (second_digit == 5)
    {
        cout << "Five";
    }
    if (second_digit == 6)
    {
        cout << "Six";
    }
    if (second_digit == 7)
    {
        cout << "Seven";
    }
    if (second_digit == 8)
    {
        cout << "Eight";
    }
    if (second_digit == 9)
    {
        cout << "Nine";
    }
}