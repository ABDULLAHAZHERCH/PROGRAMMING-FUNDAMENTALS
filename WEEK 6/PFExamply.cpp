#include <iostream>
using namespace std;
void great1(int, int, int);
main()
{
   system("cls");
   int no1, no2, no3;
   cout << "Enter 1st Number : ";
   cin >> no1;
   cout << "Enter 2nd Number : ";
   cin >> no2;
   cout << "Enter 3rd Number : ";
   cin >> no3;
   great1(no1, no2, no3);
}
void great1(int no1, int no2, int no3)
{
   if (no1 > no2 && no1 > no3)
   {
      cout << "THIS IS GREATER NUMBER : " << no1 << endl;
   }
   if (no2 > no1 && no2 > no3)
   {
      cout << "THIS IS GREATER NUMBER : " << no2 << endl;
   }
   if (no3 > no1 && no3 > no2)
   {
      cout << "THIS IS GREATER NUMBER : " << no3 << endl;
   }
   else
   {
      cout << "INFINITY IS GREAT ";
   }
}