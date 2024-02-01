#include<iostream>
using namespace std;
class bash
{
private:
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
class derived:public bash//declear derived class and moi(mode of inheritance is public)
{
int m;//it is in private but memory allocate for bash + darived datamember//size of derived = 8;
public:
		void set_derived()
		{
			cout<<"enter x and m"<<endl;
		//	cin>>x;//error genrated
			set_bash();//no error because this fn is in herited beacuse of public section
			cin>>m;
		}
		void get_derived()
		{
			//cout<<"x -"<<x;//error
			get_bash();
			cout<<"m -"<<m<<endl;
		}
};
int main()
{
bash b1;
derived d1;
//b1.set_bash();//no error
//d1.set_bash();//done because member fn is in public it is inherited
//b1.x=200;//in valid because x is privated
//d1.x=300;//invalid because in derived x is not inherited
//d1.set_derived();//x can't be excess because it is in private section so  no inherited in derived class
//d1.m=400;//error because m is in private section
//b1.m=400;//error bash class is not having member called m(bash can't excess member of derived
//b1.get_bash();//no error
//d1.get_derived();// error it will internully pass addresh of d1  and d1 does't have x
//d1.get_bash();//it will internully passed addresh of d1 cath with this pointer so get_bash is giving us d1 object x value
d1.set_derived();
d1.get_derived();
}



