#include<iostream>
using namespace std;
void taxator(char,float);
main()
{
    system("cls");
    char type;
    float price;
    cout <<"Enter Vehicle Code (M,E,S,V,T) : ";
    cin >> type;
    cout <<"Enter Price Of Vehicle : ";
    cin >> price;
    taxator(type,price);
}
void taxator(char type,float price)
{
    cout <<"Vehicle type : "<<type<<endl;
    if(type=='M')
    {
        float tax=(price*0.06);
        cout <<"TAX Amount : "<<tax <<endl;
        float finalprice =price+tax;
        cout <<"Final Price : "<<finalprice<<endl;
    }
    if(type=='E')
    {
        float tax=(price*0.08);
        cout <<"TAX Amount : "<<tax <<endl;
        float finalprice =price+tax;
        cout <<"Final Price : "<<finalprice<<endl;
    }
    if(type=='S')
    {
        float tax=(price*0.1);
        cout <<"TAX Amount : "<<tax <<endl;
        float finalprice =price+tax;
        cout <<"Final Price : "<<finalprice<<endl;
    }
    if(type=='V')
    {
        float tax=(price*0.12);
        cout <<"TAX Amount : "<<tax <<endl;
        float finalprice =price+tax;
        cout <<"Final Price : "<<finalprice<<endl;
    }
    if(type=='T')
    {
        float tax=(price*0.15);
        cout <<"TAX Amount : "<<tax <<endl;
        float finalprice =price+tax;
        cout <<"Final Price : "<<finalprice<<endl;
    }
}