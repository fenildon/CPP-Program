#include<iostream>
using namespace std;
class family
{
	int cash,gold;
	public:
	family();//def constructor
	family(int,int);//paramiteried constructor
	void get_data();//mem fn defination
};
family::family():cash(100),gold(230)
{
	cout<<"def constructor"<<endl;
}
family::family(int a,int b):cash(a),gold(b)
{
	cout<<"in paramiterize member varibale inalization"<<endl;
}
void family::get_data()
{
	cout<<cash<<" "<<gold<<endl;
}
int main()
{
	family f1,f2(10,20);
	f1.get_data();
	f2.get_data();
}
