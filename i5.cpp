#include<iostream>
using namespace std;
int table(int);

 main()
{
	int n;
	cout << "enter number :";
	cin >> n;
	table(n);
}
int table(int n)
{
		 
	 for(int i=1; i<=10; i++)
	 {
	 	cout << n << "*" << i<< "=" << n * i << endl;
	 }
}
