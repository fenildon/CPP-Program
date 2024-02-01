#include<iostream>
using namespace std;
class B;
class A{
	int x,y;
	public:
	void set_data()
	{
		cout<<"enter x and y"<<endl;
		cin>>x>>y;
	}
 	void get_data(B temp);
	
	
        
	friend class B;
};
class B{
friend class A;
	int m,n;
	public:
void set_data()
{
cout<<"in class B enter m n"<<endl;
cin>>m>>n;
}
	void get_data1(A temp)
	{
		cout<<"in getdata 1 fn"<<endl;
		cout<<temp.x<<" "<<temp.y<<endl;
	}
	void get_data2(A temp)
	{
		cout<<"in getdata2 fn"<<endl;
		cout<<temp.x<<" "<<temp.y<<endl;
	}
	void get_data3(A temp)
	{
		cout<<"in getdata3 fn"<<endl;
		cout<<temp.x<<" "<<temp.y<<endl;
	}
};

 	void A::get_data(B temp)
	{
	cout<<"class a excess class b datamember"<<endl;
	cout<<temp.m<<" "<<temp.n<<endl;
        }
int main()
{
A c1;
B c2;
c1.set_data();
c2.set_data();
c2.get_data1(c1);
c1.get_data(c2);
//c2.get_data3(c1);
}



 
