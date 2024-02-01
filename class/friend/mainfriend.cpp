#include<iostream>
using namespace std;
class family
{
int cash,gold;
friend int main();
public:
void set_data();
};
void family::set_data()
{
cin>>cash>>gold;
}
int main()
{
family f1;
f1.set_data();
cout<<f1.cash<<" "<<f1.gold<<endl;
}

