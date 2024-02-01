#include<iostream>
using namespace std;
class family
{
	//static int count;//if we write count in private section we can't excess it directly in main fn so we need member fn called count_return
	int fbid;
	char name[20];
	public:
	static int count;
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
	f1.get_data();
	f2.get_data();
	f3.get_data();
	f4.get_data();
	cout<<family::count<<endl;
}





