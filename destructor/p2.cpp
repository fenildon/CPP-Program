//when we use new operator in member fn then must and should call our own distructor other wise memory leak is happen
#include<iostream>
#include<cstring>
using namespace std;
class family
{
char *name;
public:
family()
{
cout<<"constructor"<<endl;
name=new char[20];
strcpy(name,"hello world");
}

~family()
{
cout<<"destructor"<<endl;
delete []name;//if we don't write this memory leek will happen
}
};
int main()
{
family f1;
}
