#include <iostream>
using namespace std;

void swap(int *array1 , int *array2 , int n)
{
    int i=0,a=0;
    
    for(i=0 ; i<n ; i++)
    {
        a= array1[i];
        array1[i] = array2[i];
        array2[i] = a;
    }
}


main()
{
    int i=0;
    
    int a1[6] = {1,2,3,4,5,6};
    int a2[6] = {7,8,9,10,11,12};
    
   
    swap(a1,a2,5);
	
    cout<<"After swap :" << endl;
	
    for(i=0 ; i<6 ; i++)
    {
        cout <<i << a1[i] << endl;
    }
    
  cout << endl;
    
    for(i=0 ; i<6 ; i++)
    {
		cout<< i << a2[i] <<endl;
    }
}

