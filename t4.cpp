#include<iostream>
using namespace std;

class house
{
	public :
		int house_no,room;
		char color[100];
		int a;
};

int main()
{
   	house b;
   	
	cout << "Enter house no :";
	cin>>b.house_no;
	cout << "Enter rooms :";
	cin>>b.room;
	cout << "Enter color :";
	cin>>b.color;
	cout << "Enter room drover :";
	cin>>b.a;
	cout << endl << endl;

cout <<"House no : " 	<< b.house_no << endl 
	<<"room : "			<<b.room   << endl
	<<"color :"			<<b.color  << endl
	<<"room_drover : " 	<<b.a;

}
