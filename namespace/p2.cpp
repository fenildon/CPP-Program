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
//using namespace SBI;
//using namespace ICICI;
int main()
{
	cout<<SBI::accno<<endl;
	ICICI::welcome();
}


