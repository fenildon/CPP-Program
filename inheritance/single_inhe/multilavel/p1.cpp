#include<iostream>
using namespace std;
class base
{
   int x;
   public:
   base(int a):x(a){}
    base()
   {
    cout<<"base constructor"<<endl;
    x=10;
   }
    ~base()
        {
            cout<<"base destructor"<<endl;
        }
        void get_data()
        {
            cout<<"x="<<x<<endl;
        }
};
class D1:public base
{
   int y;
   public:
   D1(int a,int b):base(a),y(b){}
    D1()
   {
    cout<<"D1 constructor"<<endl;
    y=20;
   }
    ~D1()
        {
            cout<<"D1 destructor"<<endl;
        }
        void get_data()
        {
            base::get_data();
            cout<<"y="<<y<<endl;
        }
};
class D2:public D1
{
   int z;
   public:
   D2(int a,int b,int c):D1(a,b),z(c){}
    D2()
   {
    cout<<"D2 constructor"<<endl;
    z=30;
   }
  // ~D2():~D1(){} it will genrated error because destructor is called by implicitly //in rev order of constructor(last in first out)
    ~D2()
        {
            cout<<"D2 destructor"<<endl;
        }
    void get_data()
    {
     D1::get_data();
     cout<<"z="<<z<<endl;              

    }
};
int main()
{
    D2 d1(50,60,70);
    d1.get_data();
    //cout<<"base="<<sizeof(base)<<endl;
   // cout<<"base="<<sizeof(D1)<<endl;
  //cout<<"base="<<sizeof(D2)<<endl;

}

