#include<iostream>
using namespace std;
class family
{
public:
family()
{
cout<<"def constructor"<<endl;
}
~family()
{
cout<<"destructor"<<endl;
}
};
int main()
{
family f1;//it will call construcotr first then for object destroy call distructor
}
