#include<iostream>
#include<windows.h>
using namespace std;
void name();
void gotoxy(int,int);
main()
{
  system("cls");  
  name();
  int x=30;
  int y=30;
  gotoxy(x, y);
}
  void gotoxy(int x,int y)
  {
  
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
  }
  void name()
  {
     
     gotoxy(30, 30);cout <<"       A"<<endl;
     gotoxy(30, 31);cout <<"      A A"<< endl;
     gotoxy(30, 32);cout <<"     A   A"<< endl;
     gotoxy(30, 33);cout <<"    A     A"<< endl;
     gotoxy(30, 34);cout <<"   AAAAAAAAA"<< endl;
     gotoxy(30, 35);cout <<"  A         A"<< endl;

     gotoxy(30, 36);cout <<"       A"<< endl;
     gotoxy(30, 37);cout <<"      A A"<< endl;
     gotoxy(30, 38);cout <<"     A   A"<< endl;
     gotoxy(30, 38);cout <<"    A     A"<< endl;
     gotoxy(30, 39);cout <<"   AAAAAAAAA"<< endl;
     gotoxy(30, 40);cout <<"  A         A"<< endl;
  }