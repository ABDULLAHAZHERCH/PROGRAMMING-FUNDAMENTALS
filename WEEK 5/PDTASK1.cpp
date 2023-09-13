#include<iostream>
using namespace std;
int sum();
int no1=10;
int no2=20;
main()
{
    system("cls");
    int x=no1;
    no1=100;
    x=20;
    no2=sum();
    cout<<no1<<" : "<<no2;
}
int sum()
{
    no1=40;
    return no1+no2;
}