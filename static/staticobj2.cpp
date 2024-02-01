#include<iostream>
using namespace std;
class family
{
	static int count;//if we write count in private section we can't excess it directly in main fn so we need member fn called count_return
	int fbid;
	char name[20];
	public:
//	static int count;//error redeclration of count
	int obj_status()
	{
	return count;
	}
	void get_data()
	{
		cout<<"fbit ="<<fbid<<endl;
	}

	family()
	{
		cout<<"enter fb id and name"<<endl;
		cin>>fbid>>name;
		count++;
	}
	~family()
	{
		count--;
	}
};
int family::count=0;
int main()
{
	family f1,f2,f3,f4;
	{
	family f5,f6;
	cout<<f1.obj_status()<<endl;//it will print 6 
	}//after this breases f5,f6 life is end it will call distructor.(count--)
	f1.get_data();
	f2.get_data();
	f3.get_data();
	f4.get_data();
//	cout<<family::count<<endl;//it will genrate error because count is in private secion
	cout<<f2.obj_status()<<endl;//it will print 4 because distrucot coutn decriment 2 time
}





