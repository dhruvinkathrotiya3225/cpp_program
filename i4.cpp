#include<iostream>
using namespace std;

int fact(int b);

int main()
{
	int b;
	
	cout << "enter number : ";
	cin >> b;
	
	cout << "ans :" << fact(b);
	return 0;
}
int fact (int b)
{
	if(b>1)
	return b* fact(b-1);
	else
		return 1;
}

