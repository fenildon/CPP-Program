#include<iostream>
using namespace std;
class base
{
    char *s1;
    public:
  virtual   base()
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
class derived1
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
class derived2
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
  derived2 dptr;//object created after construction execution//compiler show virtual keyword so constructor is not called compile time 
  //because of constructor is not called object is not created error will acuure
}




