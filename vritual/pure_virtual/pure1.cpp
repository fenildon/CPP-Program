//a virtual fn which is declear in class but not define is reffer to pure virtual fn
//if class is having at least 1 pure virtual fn it is called as abstract class
//a class having pure virtual fn this class object we can't create(RBI)
//means abstract class object we can't create
//if virtual fn is pure it mest redefine in derived class other wise error will genrated
#include<iostream>
using namespace std;
class base//we can't create object of this class because it is abstract class
{
    public:
    virtual void test()=0;
};
class derived:public base//it is behave like abstract class so object we cant created
{

};
int main()
{
    //base b1;
    derived d1;
}