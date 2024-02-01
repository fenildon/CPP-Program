#include<iostream>
using namespace std;
class A;
class B{
	int m,n;
	public:
	void get_data1(A);
	void get_data2(A );
	void get_data3(A );
};
class A{
	int x,y;
	public:
	void set_data()
	{
		cout<<"enter x and y"<<endl;
		cin>>x>>y;
	}
	friend void  B::get_data1(A);
};
////////////////class b memberfn defination////////////////	
	void B::get_data1(A temp)
	{
		cout<<"in getdata 1 fn"<<endl;
		cout<<temp.x<<" "<<temp.y<<endl;
	}
	void B::get_data2(A temp)
	{
		cout<<"in getdata2 fn"<<endl;
//		cout<<temp.x<<" "<<temp.y<<endl;
	}
	void B::get_data3(A temp)
	{
		cout<<"in getdata3 fn"<<endl;
//		cout<<temp.x<<" "<<temp.y<<endl;
	}
int main()
{
A c1;
B c2;
c1.set_data();
//c2.set_data();
c2.get_data1(c1);
c2.get_data2(c1);
c2.get_data3(c1);
}



 
