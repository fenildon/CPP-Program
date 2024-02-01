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

	void get_data()
	{
		cout<<x<<" "<<y<<endl;
	}
	addition add_data1(addition obj2)//hear no need to pass 1st obj
	{
       	addition temp;
	temp.x=x+obj2.x;
        temp.y=y+obj2.y;
	return temp;

	}
};
int main()
{
addition a1,a2,a3;
a1.set_data();
a2.set_data();
a3=a1.add_data1(a2);
a3.get_data();
}






