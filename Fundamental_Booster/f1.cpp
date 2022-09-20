#include<iostream>
using namespace std;
main()
{
	int i,count;
	string n;
	cout<<"enter a number :";
	cin>>n;
	for(i=0; i<n.length(); i++)
	{
		if(isdigit(n[i])==false)
	{
	count=1;
	break;
	}
	else
	count=0;
	}
	if(count==0)
	cout<<"number";
	else
	cout<<"not number";
}

