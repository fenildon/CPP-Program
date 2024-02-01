#include<iostream>
using namespace std;
class complx
{
	int r,i;
	public:
		complx()//def constructuor
		{
			r=0;i=0;
		}
	complx(int r,int i)//parameterized construcotr
	{
		this->r=r;
		this->i=i;
	}
	void get_data()
	{
	cout << r <<showpos<<i<<"i"<<noshowpos<<endl;//show postive as well as neg sign
	}
friend	complx operator +(complx,complx);//deceltraion of friend operator fn
};
complx operator +(complx obj1,complx obj2)// it is not having this pointer
{
	cout<<"+ opeartor overloadign"<<endl;
	complx result;
	result.r=obj1.r+obj2.r;
	result.i=obj1.i+obj2.i;
	return result;
}
int main()
{
complx f5,f2(10,20),f3(100,200),f4(10,-200);
f5=f2+f3+f4;//it will call + operator 2 time
f2=f4+f3;//internully converstioin operator +(f4,f3)//
f4.get_data();
f5.get_data();
}

