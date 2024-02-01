#include<iostream>
using namespace std;
int main()
{
    /*
try
{
    {
        throw 100;
    }
}
//catch(int a)
catch (float a)//it will genrated run time error core dumped
{
    cout<<"a= "<<a<<endl;
}
*/
try
{
    {
        throw "HELLO HAI";//if throw encountered then only catch will execute
    }
}
catch(const char *p)//it will genrated run time error
{
    cout<<"p= "<<p<<endl;
}
}



