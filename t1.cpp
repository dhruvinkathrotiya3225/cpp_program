#include<iostream>
using namespace std;

class Distance
{
	public :
		int feet1,feet2,inch1,inch2;

};

int main()
{
	Distance d1,d2;
	int fullfeet,fullinch;

		{
			cout << "please enter feet 1 : ";
			cin >> d1.feet1;
			cout << "please enter inch 1 : ";
			cin >> d1.inch1;
		}
		
		{
			cout << "please enter feet 2 : ";
			cin >> d2.feet2;
			cout << "please enter inch 2 : ";
			cin >> d2.inch2;
		}

		fullfeet = d1.feet1 + d2.feet2;
		fullinch = d1.inch1 + d2.inch2;
	
		while( fullinch >= 12)
		{
			fullinch = fullinch - 12;
			fullfeet++;
		}
		
	cout << "Feet : " << fullfeet << endl  << "Inch : "<<  fullinch;
	return 0;
}
