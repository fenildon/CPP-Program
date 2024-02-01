//a virtual fn which is declear in class but not define is reffer to pure virtual fn
//if class is having at least 1 pure virtual fn it is called as abstract class
//a class having pure virtual fn this class object we can't create(RBI)
//means abstract class object we can't create
//if virtual fn is pure it mest redefine in derived class other wise error will genrated
//real time example rbi and other bank//rbi object we cant created //other bank must have rbi fn redefination
//ex min_bal(),chak_bal(),pass_reset()......other wise other bank cant crated account
#include<iostream>
using namespace std;
class base//we can't create object of this class because it is abstract class
{
    public:
    virtual void test()=0;
};
class derived:public base
{
    public:
void test()//because of redefination of test fn it is not behave like abstract class
{
    cout<<"derived object is created"<<endl;
}
};
int main()
{
    //base b1;
    derived d1;
    d1.test();
}