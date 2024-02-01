#include<iostream>
using namespace std;
class base{
    int x;
    public:
    base()//base class const and dest is not inherited in derived
    {
        cout<<"base const"<<endl;
    }
    ~base()
    {
        cout<<"base dest"<<endl;
    }
};
class Derived:public base
{
    int x;
    public:
    Derived()//it will first call base const then derived const
    {
        cout<<"Derived constructor"<<endl;
    }
    ~Derived()
    {
    cout<<"Derived destrocotr"<<endl;
    }
};

int main()
{
    Derived d1;//it will first call base construct then derived 
}    //destructor is called rev of constructor
 