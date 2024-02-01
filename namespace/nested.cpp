#include<iostream>
using namespace std;
namespace first
{
int x=10;
 	namespace second
	{
		int x=100;
		namespace thired
		{
			int x=1000;
		}
	}
}
int main()
{
namespace x=first::second::thired;//giving new name to namespace
cout<<first::x<<endl;
cout<<first::second::x<<endl;
cout<<first::second::thired::x<<endl;
cout<<x::x<<endl;
}
