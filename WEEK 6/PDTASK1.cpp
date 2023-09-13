#include<iostream>
using namespace std;
string activity(string, string );
main()
{
    system("cls");
    string temp,humidity;
    cout<<"Enter Temp.(warm ,cold) : ";
    cin>> temp;
    cout<<"Enter humidity level (dry,humid) : ";
    cin >>humidity; 
    string result=activity(temp,humidity);
    cout<< result;
}
string activity(string temp,string humidity)
{
    string active;
    if(temp=="warm" && humidity=="dry")
    {
        active="Play tennis";
    }
    if(temp=="warm" && humidity=="humid")
    {
        active="Swim";
    }
    if(temp=="cold" && humidity=="dry")
    {
        active="Play basket ball";
    }
    if(temp=="cold" && humidity=="humid")
    {
        active="Watch T.V";
    }
    return active;
}