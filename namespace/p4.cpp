#include<iostream>
using namespace std;
namespace SBI
{
	int accno=1234;
	void welcome()
	{
		cout<<"wlecome in sbi"<<endl;
	}
}
namespace ICICI
{
	int accno=5678;
	void welcome()
	{
		cout<<"wlcome in icici"<<endl;
	}
}
using namespace SBI;
//using namespace ICICI;
using ICICI::accno;
int main()
{
	cout<<accno<<endl;//error accno is ambiguous
	welcome();
}


