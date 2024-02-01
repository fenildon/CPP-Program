#include<iostream>
using namespace std;
class addition 
{
	int x,y;
	public:
	void set_data()
	{
		cout<<"enter x and y"<<endl;
		cin>> x >> y;
	}
	void get_data(void)
	{
		cout<<x<<" "<<y<<endl;
	}
	addition& add_data1(addition &obj2)//hear no need to pass 1st obj
	{
cout << "&obj : " << (unsigned long int)&obj2 << endl;
	static addition temp;
	temp.x=x+obj2.x;
        temp.y=y+obj2.y;
	return temp;

	}
};

int main()
{
addition a1,a2,a3;
cout << "&a2 : " << (unsigned long int)&a2 << endl;
a1.set_data();
a2.set_data();
a3=a1.add_data1(a2);
a1.get_data();
a2.get_data();
a3.get_data();
}






