#include<iostream>
using namespace std;
class family
{
int cash,gold;
public:
void set_data();
friend void display(family);
};
void display(family f1)
{
cout<<f1.cash<<" "<<f1.gold<<endl;
}
void family::set_data()
{
cout<<"enter cash and gold"<<endl;
cin>>cash>>gold;
}
int main()
{
family f1;
f1.set_data();
display(f1);
}


