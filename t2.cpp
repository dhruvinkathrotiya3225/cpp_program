#include<iostream>
#include<string.h>
using namespace std;
class time
{
	public:
		int sec;
		int min;
		int hour;	
};
int main()
{
	time t1, t2;
	int ts,tm,th;
	cout << "enter sec : ";
	cin >> t1.sec;
	cout << "enter min : ";
	cin >> t1.min;
	cout << "enter hours : ";
	cin >> t1.hour;
	
	cout << "enter sec : ";
	cin >> t2.sec;
	cout << "enter min : ";
	cin >> t2.min;
	cout << "enter hours : ";
	cin >> t2.hour;
	
	ts=t1.sec + t2.sec;
	tm=t1.min + t2.min;
	th=t1.hour + t2.hour;
	cout << th << ":";
	cout << tm << ":";
	cout << ts  ;
	return 0;	
}


