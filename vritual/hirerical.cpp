#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    //we can write virtual hear but only 1st fun consider as virtual 
    virtual void  test1()
    {
        cout<<"in A test 1"<<endl;  
    }
    virtual void  test2()
    {
        cout<<"in A test 2"<<endl;
    }
      void test3()
    {
        cout<<"in A test 3"<<endl;
    }
};
class B:public A{
    public:
    void test2()//it will vitual bydefulat because of inheritance
    {
        cout<<"in B test 2"<<endl;
    }
    void test3()
    {
        cout<<"in B test 3"<<endl;
    }
};
class C:public A{
public:
 void test1()//virtual 
 {
    cout<<"in C test 1"<<endl;
 }
void test3()
{
    cout<<"in C test 3"<<endl;
}
};
int main()
{
    A *bptr;
   /* A a;
    bptr=&a;
    bptr->test1();//bptr->vptr->test1()
    bptr->test2();//bptr->vptr->test2()
    bptr->test3();*///bptr->test3()
  /* B b;
   bptr=&b;
   bptr->test1();
    bptr->test2();
    bptr->test3();*/
    C c;
    bptr=&c;
    bptr->test1();
    bptr->test2();
    bptr->test3();
    cout<<"sizeof c="<<sizeof(A)<<endl;// x ,vptr //structure pading size = 16
} 