#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter x"<<endl;
    cin>>x;
    A:
    cout<<"enter y"<<endl;
    cin>>y;
    try
    {//we can't write lable in try block
        
            if(y==0)
            throw "EXCEPTION DEVIDED BY ZERO";
            cout<<"result= "<<x/y<<endl;
        
    }
    catch(const char *p)
    {
        cout<<"CATCH :"<<p<<endl;
     goto A;//we can use goto in catch
    }
    cout<<"HAI"<<endl;
    cout<<"HELLO"<<endl;
}