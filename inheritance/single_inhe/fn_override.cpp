#include<iostream>
using namespace std;
class base{
public:
    int x;

    base()//base class const and dest is not inherited in derived
    {
        cout<<"base const"<<endl;
    }
    base(int a):x(a)
    {
        cout<<"parameterized base"<<endl;
    }
    void get_data()
    {
        cout<<"x="<<x<<endl;
    }
    ~base()
    {
        cout<<"base dest"<<endl;
    }
};
class Derived:public base
{
    public:
    int x;
    void get_data()
    {
        base::get_data();
        cout<<"x="<<x<<endl;
    }
    Derived()//it will first call base const then derived const
    {
        cout<<"Derived constructor"<<endl;
    }
    Derived(int a,int b):base(a){
        cout<<"parameter drived"<<endl;
        x=b;
    }
    ~Derived()
    {
    cout<<"Derived destrocotr"<<endl;
    }
};

int main()
{
    Derived d1(100,200);
    cout<<d1.x<<" "<<d1.base::x<<endl;
    d1.base::get_data(); 
    d1.get_data();
}    
 