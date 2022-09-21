#include<iostream>
#include<string.h>
using namespace std;
class time
{
	public:
		int sec;
};
int main()
{
	int hh,mm,ss,a;
	time t1;
	
	cout << "enter secound :" ;
	cin>> t1.sec;
	hh=t1.sec/3600;
	a=t1.sec%3600;
	mm=a/60;
	ss=a%60;
	cout << hh <<":" <<mm << ":" << ss ;
	return 0;
}

