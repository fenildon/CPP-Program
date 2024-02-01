//if we dont provied any copy constructor compiler will call def copy constructor
//syntax A(A&);
#include<iostream>
using namespace std;
class family
{
	int cash,gold;
	public:
	family();
	family(int,int);
	family(family&);
	void get_data();
};
void family::get_data()
{
	cout<<cash<<" "<<gold<<endl;
}
family::family(family &obj)
{
	cout<<"copy constructor"<<endl;
	cash=obj.cash,gold=obj.gold;
}
family::family()
{
	cout<<"def constructor"<<endl;
	cash=10,gold=200;
}
family::family(int a,int b)
{
	cout<<"paramiterized constructor"<<endl;
	cash=a,gold=b;
}
int main()
{
	family f1,f2(100,200),f3(f2),f4=f3,f5;
         f5=f4;//it will not called constructor compiler will call assignment overloaded operator
}





