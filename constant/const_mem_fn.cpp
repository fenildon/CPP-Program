#include<iostream>
using namespace std;
class family
{
mutable int cash,gold;//mutable is keyword usefull for remove constantness of any data member
public:
 void set_data()//family * const this
{
cout<<"enter the cash and gold"<<endl;
cin>>cash>>gold;
}
//if it is not constant member fn it can modify the data
//but if we write const keyword this fn have only read permision of data
// const family *const this
void get_data() const
{
cash=10,gold=20;
cout<<"cash="<<cash<<" gold="<<gold<<endl;
}
};
int main()
{
family f1;
f1.set_data();
f1.get_data();
}
