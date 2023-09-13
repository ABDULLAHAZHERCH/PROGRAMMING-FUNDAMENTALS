#include <iostream>
using namespace std;
void after15min(int hour, int minutes);
main() {
	int hour,minutes;
	cout<<"Enter Hours";
	cin >> hour;
	cout<<"Enter Minutes";
	cin >> minutes;
	after15min(hour,minutes);
	
}

void after15min(int hour, int minutes) {
	int totalmin = (hour*60)+minutes;
	int totalmins = totalmin + 15;
	if (totalmins > 1440)
	{
		totalmins = totalmins - 1440;
	}
	int hours = totalmins / 60;
	int mins = totalmins % 60;
	cout<<"The time is "<<hours<<" : "<<mins; 
}