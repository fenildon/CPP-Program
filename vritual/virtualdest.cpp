#include<iostream>
using namespace std;
class base
{
    char *s1;
    public:
     base()
    {
        cout<<"base const"<<endl;
        s1=new char[20];
    }
  ~base()
  {
    cout<<"base dest"<<endl;
    delete []s1;
  }
};
class derived1:public base
{
    char *s2;
    public:
    derived1()
    {
        cout<<"d1 const"<<endl;
        s2=new char[20];
    }
  ~derived1()
  {
    cout<<"d1 destruct"<<endl;
    delete []s2;
  }
};
class derived2:public derived1
{
    char *s3;
    public:
    derived2()
    {
        cout<<"d2 constructor"<<endl;
      s3=new char[20];
    }
 ~derived2()
 {
    cout<<"d2 destructor"<<endl;
    delete []s3;
 }
}; 
int main()
{
  derived2 *dptr;
  dptr=new derived2;
  delete dptr;//if we don't write this it will called only constructor destructor is not called because pointer is hold dynamic object addresh
//because of non virtual run time desioson it takken
}




