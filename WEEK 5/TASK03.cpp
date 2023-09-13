#include<iostream>
#include<cmath>
using namespace std;
bool symetry(int);

main()
{
  system("cls");
  int no1;
  cout<<"ENTER 3 DIGIT Number : ";
  cin >>no1;
  bool symmetric = symetry(no1);
  if(symmetric == 1)
  {
    cout<< "True";
  }
  if(symmetric == 0)
  {
    cout<< "False";
  }
}

bool symetry(int no1)
{
  return no1%10==no1/100;
}
