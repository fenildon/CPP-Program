#include<iostream>
using namespace std;
class complx
{
	int r,i;
	public:
	complx()
	{
		r=0,i=0;
	}
	complx(int r,int i)
	{
		this->r=r,this->i=i;
	}
	void get_data(void);
	complx operator +(complx);
	complx operator -(complx);
	complx operator *(complx);
};
void complx::get_data()
{
	cout<<r<<showpos<<i<<"i"<<noshowpos<<endl;
}
complx complx::operator +(complx obj1)
{
	complx result;
	result.r=r+obj1.r;
	result.i=i+obj1.i;
	return result;
}
complx complx::operator -(complx obj1)
{
	complx result;
	result.r=r-obj1.r;
	result.i=i-obj1.i;
	return result;
}
complx complx::operator *(complx obj1)
{
	complx result;
	result.r=r*(obj1.r);
	result.i=i*(obj1.i);
	return result;
}
int main()
{
	complx f1(10,20),f2(10,20),f3(10,20),f4(10,20),f5;
	f5=f1+f2-f3*f4;
	f5.get_data();
}

