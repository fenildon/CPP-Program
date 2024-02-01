#include<iostream>
#include<cstring>
using namespace std;
class family
{
char *name;
public:
family()
{
cout<<"def constructor"<<endl;
name=new char[20];
strcpy(name,"hello world");
}
~family()
{
cout<<"destrucot"<<endl;
delete []name;
}
};
int main()
{
family *ptr;//it is not called constructor 
ptr=new family;//it will call only def constructor
delete ptr;// it will call only copy constructor
}
