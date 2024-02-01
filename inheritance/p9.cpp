#include<iostream>
using namespace std;
class bash
{
int x;
	public:
		void set_bash()
		{
			cout<<"enter x"<<endl;
			cin>>x;
		}
		void get_bash()
		{
			cout<<"x -"<<x<<endl;
		}
};
class derived:private bash//declear derived class and moi(mode of inheritance is protected)
{
int m;//it is in private but memory allocate for bash + darived datamember//size of derived = 8;
public:
		void set_derived()
		{
			cout<<"enter x and m"<<endl;
//			cin>>x;//  error x is not inherited
			set_bash();	
			cin>>m;
		}
		void get_derived()
		{
//			cout<<"x -"<<x<<endl;//error x is not inharited in dclass
			get_bash();
			cout<<"m -"<<m<<endl;
		}
};
int main()
{
bash b1;
derived d1;
//d1.set_bash();//error because member fn of bash class is in private it is inherited
//b1.x=200;//  error because x privated
//d1.x=300;//invalid because in derived x is not inherited
//d1.set_derived();//no error public section
//d1.m=400;//error because m is in private section
//b1.m=400;//error bash class is not having member called m(bash can't excess member of derived
//b1.get_bash();//no error
//d1.get_derived();//  no error
//d1.get_bash();//error because it is in private

d1.set_derived();
d1.get_derived();
}



