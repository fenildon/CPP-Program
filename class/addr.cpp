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
       cout<<"=========================="<<endl;
	cout<<"this addr in set fn ="<<(unsigned long)this<<endl;
	cout<<"enter x and y"<<endl;
	cin>>x>>y;
}
void A::get_data()
{
       cout<<"=========================="<<endl;
       cout<<"this addr in get fn ="<<(unsigned long)this<<endl;
	cout<<x<<" "<<y<<endl;
}

int main()
{
	class A a1,a2;
	cout<<"&a1="<<(unsigned long)&a1<<" &a2="<<(unsigned long)&a2<<endl;
	a1.set_data();
	a2.set_data();	
	a1.get_data();
	a2.get_data();
}






