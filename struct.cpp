//size of empty structure is 1//because of variable existance
//bydefault member of struture is in public  access specifier
//if we write data member in private it is treated as class
#include<iostream>
using namespace std;
struct st
{
//private:
	int x;
	int y;
//public:
	void print()
	{
		cout<<"welcome to c++ structure"<<endl;
	}
};
int main()
{
	struct st s1;
	cout << sizeof(s1)<<endl;
	cin>>s1.x>>s1.y;
	s1.print();
}
