#include<iostream>
using namespace std;
class base//size of base is 8
{
public:
   virtual //if we write virtual here only 1 st fn consider as virtual fn
   
    void test(){
        cout<<"in test base function"<<endl;
    }
    void test2()
    {
        cout <<"in test2 base function"<<endl;
    }
};
//size of derived is 8
class derived:public base{//if mode of inheritance is in private or protected inheritance of virtual test fn is in private or protected in derived calss error genrated
    void test(){
        cout<<"in test derived fucntion"<<endl;
    }
    void test2(){
        cout<<"int test2 derived fn"<<endl;
    }
};
int main()
{
   /* derived d1;
    d1.test();//it will genrated error because it is private section
   base b1;
    b1.test();//no error if test fn public
   */
  base *bptr;
  derived d1;
  bptr=&d1;
  //bptr->test();//if virtual function of bptr is in private section it will genrated error
bptr->test();//it will excess derived test function either it is private or protected section beacuse 
//only base class excess specifier is chack in virtual case
cout<<"base="<<sizeof(base)<<"derived="<<sizeof(derived)<<endl;






}