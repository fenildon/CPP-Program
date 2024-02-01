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
int main()
{
	using namespace ICICI;
	cout<<accno<<endl;
	welcome();

	{
	
		using namespace SBI;////error compiler unable to decide 
		cout<<accno<<endl;//it is identifier so local global concept is not here
		welcome();
	
	}


}


