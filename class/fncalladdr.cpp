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
	void add_obj(addition *obj1,addition *obj2)
	{
       	x=obj1->x+obj2->x;
        y=obj1->y+obj2->y;
	}
};
int main()
{
addition a1,a2,a3;
a1.set_data();
a2.set_data();
a3.add_obj(&a1,&a2);
a1.get_data();
a2.get_data();
}






