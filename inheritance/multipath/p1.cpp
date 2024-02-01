#include<iostream>
using namespace std;
class A//size 4
{
    public:
    int x;
    A(){cout<<"a constructor"<<endl;}
    ~A(){cout<<"a destructor"<<endl;}
};
class B:public A//size 8
{
    public:
    int y;
    B(){cout<<"b constructor"<<endl;}
    ~B(){cout<<"b destructor"<<endl;}
};
class C:public A//size 8
{
    public:
    int z;
    C(){cout<<"c constructor"<<endl;}
    ~C(){cout<<"c destructor"<<endl;}
};
class D:public C,public B//fist chack public C(x,z) then chack public B(x,y)
{
    public://size 20
    int m;
    D(){cout<<"d constructor"<<endl;}
    ~D(){cout<<"d destructor"<<endl;}
};
int main()
{
    D d1;
}