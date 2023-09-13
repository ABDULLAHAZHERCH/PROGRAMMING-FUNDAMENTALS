#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void maze();
void move(int x,int y);
main()
{
  system("cls");
  maze();
  int x=5;
  int y=5;
  move(x,y);
}
void maze()
{
  cout <<"********************************************************"<<endl;
  cout <<"*                                                      *"<<endl;
  cout <<"*                                                      *"<<endl;
  cout <<"*                                                      *"<<endl;
  cout <<"*                                                      *"<<endl;
  cout <<"*                                                      *"<<endl;
  cout <<"*                                                      *"<<endl;
  cout <<"*                                                      *"<<endl;
  cout <<"*                                                      *"<<endl;
  cout <<"*                                                      *"<<endl;
  cout <<"********************************************************"<<endl;
}
void gotoxy(int x,int y)
{
  
  COORD coordinates;
  coordinates.X= x;
  coordinates.Y= y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void move(int x,int y)
{
  gotoxy(x-1, y);
  cout<<" ";
  gotoxy(x, y);
  cout<<"P";
  Sleep(200);
}
