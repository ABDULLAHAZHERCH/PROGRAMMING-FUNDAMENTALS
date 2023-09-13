#include <iostream>
using namespace std;
void hospital(int);
main()
{
    system("cls");
    int period;
    cout << "Enter number of days :";
    cin >> period;
    hospital(period);
}
void hospital(int period)
{
    int treated = 0, untreated = 0, doctors = 7;
    for (int i = 1; i <= period; i++)
    {
        int patients;
        cout << "Enter Number of patients on Day " << i << " : ";
        cin >> patients;
        if (patients <= doctors)
        {
            treated = treated + patients;
            untreated = untreated + 0;
        }
        else
        {
            treated = treated + doctors;
            untreated = untreated + (patients - doctors);
        }
        if (i % 2 == 0 && untreated > treated)
        {
            doctors++;
        }
    }
    cout << "Treated patients: " << treated << "." << endl;
    cout << "Untreated patients: " << untreated << "." << endl;
}