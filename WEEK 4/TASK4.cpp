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
  int x=8;
  int y=5;
  while (true)
  {
    move(x,y);
    if(x < 40)
    {
       x=x+1;
    }
    if(x == 40)
    {
        gotoxy(x-1, y);
        cout<<" ";
        x=3;
    }
  }
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
