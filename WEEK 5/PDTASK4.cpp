#include<iostream>
using namespace std;
int project(float workers,float days,float needhours);
main()
{
    float workers,days,needhours;
    cout<<"Enter Hours of work yoou need : ";
    cin >>needhours; 
    cout<<"Enter Number of days you have : ";
    cin >>days; 
    cout<<"Enter Number of workers you have : ";
    cin >>workers;
    if(project(workers,days,needhours)<0)
    {
        int result =(project (workers,days,needhours)*(-1));
        cout<<"NOT Enough time. You need : "<<result <<" Hours";
    }
    if(project(workers,days,needhours)>=0)
    {
        cout<<"YES ! "<<project(workers,days,needhours)<<" Hours left";
    }
}
int project(float workers,float days,float needhours)
{
    float workdays=(days*90)/100;
    float workhours=(workdays*10);
    float totalworkhours=(workhours*workers);
    int result=totalworkhours-needhours;
    return result;
}