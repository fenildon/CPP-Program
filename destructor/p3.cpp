// destructor will called in reverse order of constructor
#include<iostream>
using namespace std;
class family
{
public:
family()
{
cout<<"constructor &="<<this<<endl;
}
~family()
{
cout<<"destrcutor &="<<this<<endl;
}
};
int main()
{
family f1,f2,f3,f4;
cout<<"&f1="<<&f1<<"&f2="<<&f2<<"&f3="<<&f3<<"&f4="<<&f4<<endl;
}
