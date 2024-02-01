#include<iostream>
using namespace std;
class family
{
int cash,gold;
public:
family():cash(100),gold(200){cout<<"def const"<<endl;};//default
family(family &obj):cash(100),gold(200){cout<<"copy const"<<endl;};//copy
family(int a,int b):cash(a),gold(b){cout<<"parametrized const"<<endl;};//parameterized
void get_data(){cout<<cash<<" "<<gold<<endl;}
};
int main()
{
family *f1=new family();//new is called defult constructori
family *f2=new family(*f1);//f2 is called copy constuctor
family *f3=new family(10,20);//f3 is called parameterized constructor
f1->get_data();
f2->get_data();
f3->get_data();
}
