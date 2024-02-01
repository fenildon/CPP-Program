#include<iostream>
using namespace std;
class son;
class father
{
	int sal;
	public:
	void set_data();
	friend void incometax(father,son);
};
class son{
	int sal;
	public:
	void set_data();
	friend void incometax(father,son);
};
	void incometax(father f,son s)
	{
          if((f.sal+s.sal)<100000)
		cout<<"pay tax 10\% okay"<<endl;
	else
		cout<<"pay tax 20\% okay"<<endl;
	}

	void father::set_data()
	{
		cout<<"enter father sal"<<endl;
		cin>>sal;
	}
	void son::set_data()
	{
		cout<<"enter son sal"<<endl;
		cin>>sal;
	}
	int main()
	{
		father f1;
		son s1;
		f1.set_data();
		s1.set_data();
		incometax(f1,s1);                
	}


