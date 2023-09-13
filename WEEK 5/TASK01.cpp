#include <iostream>
using namespace std;
int product(int);
main()
{
    int result ,num ;
    cout<<"ENTER NUMBER : ";
    cin >> num;
    result=product(num);
    cout <<"TOTAL IS : " <<result ;
}
int product (int num)
{
    int total;
    total=num*5;
    return total;
}