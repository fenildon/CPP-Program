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
//void test(family &temp)//it will not call copy constructor because for ref no memory is allocated
//family test(family temp)//it will call copy constructor 2 time 
//family& test(family &temp)//it will call copy constructor 0 time
void test(family temp)//it will call copy constructor 2 time
{
cout<<" test function "<<endl;
}
int main()
{
family f1;//call def constructor
f1.get_data();
test(f1);//call copy constructor first then test fn
f1.get_data();
}





