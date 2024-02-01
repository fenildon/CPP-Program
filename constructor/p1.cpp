//when object created constructor will automatically called
//main purpose of constructor is inalizing a data
//constructor execute before object creation
#include<iostream>
using namespace std;
class family
{
	int cash,gold;
	public:
	family(){
		cout<<"in constructor enter cash and gold"<<endl;
		cin>>cash>>gold;
	}
	void get_data(void);
};
void family::get_data()
{
	cout<<cash<<" "<<gold<<endl;
}
int main()
{
	family f1;
	f1.get_data();
}
