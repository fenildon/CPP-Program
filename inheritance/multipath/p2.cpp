#include<iostream>
using namespace std;
class A//size 4
{
    public:
    int x;
    A(int a):x(a){cout<<"a constructor"<<endl;}
    ~A(){cout<<"a destructor"<<endl;}
};
class B:public A//size 8
{
    public:
    int y;
    B(int a,int b):A(a),y(b){cout<<"b constructor"<<endl;}
    ~B(){cout<<"b destructor"<<endl;}
};
class C:public A//size 8
{
    public:
    int z;
    C(int a,int b):A(a),z(b){cout<<"c constructor"<<endl;}
    ~C(){cout<<"c destructor"<<endl;}
};
class D:public C,public B//fist chack public C(x,z) then chack public B(x,y)
{
    public://size 20
    int m;
    D(int a,int b,int c,int d,int e):C(a,b),B(c,d),m(e){cout<<"d constructor"<<endl;}
    ~D(){cout<<"d destructor"<<endl;}
     void get_data()
     {
        cout<<C::x<<" "<<z<<" "<<" "<<y<<" "<<m<<endl;
     }
};
int main()
{
    D d1(10,20,30,40,50);//if we write only object d1 complicer will genrated error it is not called def constructor
d1.get_data();
}