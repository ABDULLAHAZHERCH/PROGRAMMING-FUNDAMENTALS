#include<iostream>
using namespace std;
float pyvolume();
float length,width,height,volume;
string unit;
main()
{
    system("cls");
    cout <<"Enter Length(meters) : ";
    cin >> length ;
    cout <<"Enter Width(meters) : ";
    cin >>width;
    cout<<"Enter Height(meters) : ";
    cin >>height;
    cout <<"In which unit you want Answer(mm,cm,m,km) : ";
    cin >>unit;
    if(unit=="mm")
    {
        pyvolume();
        float result=volume*1000000000;
        cout <<"Pyramid Volume is : "<<result<<" cubic mm";
    }
    if(unit=="cm")
    {
        pyvolume();
        float result=volume*1000000;
        cout <<"Pyramid Volume is : "<<result<<" cubic cm";
    }
    if(unit=="m")
    {
        pyvolume();
        cout <<"Pyramid Volume is : "<<volume<<" cubic m";
    }
    if(unit=="km")
    {
        pyvolume();
        float result=volume/1000000000;
        cout <<"Pyramid Volume is : "<<result<<" cubic km";
    }
}
float pyvolume()
{
    volume=(length*width*height)/3;
    return volume ;
}
