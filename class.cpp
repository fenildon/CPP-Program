//variable of class is called as object or physical existance or real world entity of class or instance
//class is advance version of structure
//size of empty class is 1 byte // because of object existence
//bydefault member of struture is in private  access specifier
//sizeof class is depend upon data member not member fn
//
#include<iostream>
using namespace std;
class family
{
	int cash;
	int gold;
public:
	void set_data()
	{
	cout<<"enter x and y"<<endl;
		cin>>cash>>gold;
	}
	void get_data()
	{
	cout<<cash<<" "<<gold<<endl;
	}
};
int main()
{
	class family s1;
	cout << sizeof(s1)<<endl;
	s1.set_data();
	s1.get_data();
}
