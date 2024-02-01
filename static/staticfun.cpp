//use of static fn is when we create constructor private then must use static fn
//it will provided security object is created with in class
//singletone class:
//->it will give premision to create only one object in this case static fn is useful
//it can excess only static member(member fn or data member)
//because it doesn't have any this pointer so then we call static fn it unable to decided for which object we need to excess non static varibale
//in class for only non satatic data member memory is allocated
#include<iostream>
using namespace std;
class family
{
	static int count;
	char name[20];
	family()//it will matter public or private
	{
		cout<<"in private constructor"<<endl;
		cin>>name;
		count++;
	}
	
	~family()//it will not matter public or private
	{
         count--;
	}
	public:
	static int obj_status(void)
	{
		return count;
	}
	static void obj_create(void)
	{
		family f1;
		cout<<"count = "<<count<<endl;//excese static member no error
	//	cout<<"name = "<<name<<endl; //excesss non static data member error
	        cout<<"name= "<<f1.name<<endl
	} 
};
int family::count=0;
int main()
{
//family f1;//it will genrate error because construtor is in private section
 family::obj_create();//it whill create object called constructor inalized data then
//count is incrment print name and name count when fn end called destructor count is decrement line no 44 alway print zero
 family::obj_create();
cout<<family::obj_status()<<endl;
}













