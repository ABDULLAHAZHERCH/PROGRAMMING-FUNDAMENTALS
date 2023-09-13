#include<iostream>
using namespace std;
void digits();
int add, num,no1,no2,no3,no4,no5;
main()
{
    cout<<"Enter 5 digit number only : ";
    cin >>num;
    digits();
    if (add%2==0)
    {
        cout<<"Evenish";
    }
        if (add%2==1)
    {
        cout<<"Oddish";
    }
}
void digits()
 {
    no1=num/10;
    no2=num/100;
    no3=num/1000;
    no4=num/10000;
    no5=num/100000;
    add=no1+no2+no3+no4+no5;
 }

