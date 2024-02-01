#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	void get_data();//it is not fn member it is fn decleation
	void set_data();
};
void A::set_data()//here scope resolution is must other wise error genrated
{
	cout<<"enter x and y"<<endl;
	cin>>x>>y;
}
void A::get_data()
{
	cout<<x<<" "<<y<<endl;
}

int main()
{
	class A a1;
	a1.set_data();
	a1.get_data();
}






