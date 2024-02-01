//in c++ all member fn is having implicite this pointer (in multiple argument this pointer is seted at left most
#include<iostream>
using namespace std;
class A
{
	int x,y;// private data member
	public:
	void set_data()//void set_data(class A*const this)
	{
		cout<<"enter x and y"<<endl;
		cin>>x>>y;// cin>>this->x>>this->y
	}
	void get_data()//void get_data(class A*const this)
	{
		cout<<x<<" "<<y<<endl;//coud<< this->x << this->y << endl;
	}
};
int main()
{
	A a1,a2;//class A also we can write in c++ using tag name we can declear vari.
	a1.set_data();//A::set_data(&a1);
	a2.set_data();//A::set_data(&a2);
	a1.get_data();//A::get_data(&a1);
	a2.get_data();//A::get_data(&a2);
}

