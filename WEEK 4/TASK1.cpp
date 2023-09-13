#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
main ()
{
  system("cls");
  cout<<"TEST";
  gotoxy(15,10);
  cout<<"MY NAME IS ABDULLAH AZHER CHAUDHARY";

}

void gotoxy(int x,int y)
{
  
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}