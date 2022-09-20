#include<iostream> 
using namespace std;
 
main()
{
 int a[100],b[100],n,i;
 cout <<"Enter size of array:";
 cin >>n; 
  cout <<"Enter array element:";
  for(i=0;i<n;i++)
  {
  	cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
  	b[i]=a[i]*a[i];
  	cout<< b[i];
  }

  	
}

