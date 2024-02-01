#include<iostream>
using namespace std;
class addition 
{
	int x,y;
	public:
	void set_data()
	{
		cout<<"enter x and y"<<endl;
		cin>>this->x >> this->y;
	}

	void get_data()
	{
		cout<<x<<" "<<y<<endl;
	}
	void add_obj(addition x,addition y)//if we use formal argument as same name as datamemder than must use this->x or this->y for excess called varibale data member
//other wise error
	{
       	this->x=x.x+x.y;//error///x=x.x+x.x;
        this->y=x.x+x.y;//error//y=x.y+x.y;
	}
};
int main()
{
addition a1,a2,a3;
a1.set_data();
a2.set_data();
a3.add_obj(a1,a2);
a1.get_data();
a2.get_data();
}






