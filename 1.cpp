#include<iostream>
using namespace std;

void mul(int,int);

main()
{
	{
			int a=6, b=7;	
			 mul(a,b);
	}
}
void mul(int a, int b)
{
	int c;
	c=a*b;
	cout << c;
}
