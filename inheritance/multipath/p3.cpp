#include<iostream>
using namespace std;
class A//size 4
{
    public:
    int x;
    A(){cout<<"a destructor"<<endl;}//if we dont write def constructor it will genrated an error//it whill called by D class and while for class A object is created
    A(int a):x(a){cout<<"a constructor"<<endl;}//it will called by B and C
    ~A(){cout<<"a destructor"<<endl;}
};
class B:virtual public A//size 8
{
    public:
    int y;
    B(int a,int b):A(a),y(b){cout<<"b constructor"<<endl;}//A(a) is ignored by compiler for class D (x data member)
    ~B(){cout<<"b destructor"<<endl;}
};
class C:virtual public A//size 8
{
    public:
    int z;
    C(int a,int b):A(a),z(b){cout<<"c constructor"<<endl;}//here parametrized constructor of A(a) is ignored by compiler for inalized x of class D 
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
        cout<<x<<" "<<z<<" "<<" "<<y<<" "<<m<<endl;//heare x is printed garbage because x is comes form direct base class A (while object is created it will call defualt constructr)
     }
};
int main()
{
    D d1(10,20,30,40,50);//if we write only object d1 complicer will genrated error it is not called def constructor
d1.get_data();
   cout<<"A="<<sizeof(A)<<" "<<"B="<<sizeof(B)<<" "<<"C="<<sizeof(C)<<" "<<"D="<<sizeof(D)<<endl;
}//A=4 B=(x,y,vptr)=16  C=(x,z,vptr)=16 D=(z,vptr,y,vptr,m,x)=40(structur padding)