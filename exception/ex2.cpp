#include<iostream>
using namespace std;
int devision(int a,int b)
{
  if(b==0)
  throw "EXCEPTION DEVIED BY ZERO";//if we return 0 in this case if a is zero it will not work properly
  else
  return a/b;
}
int main()
{
    int x,y,ret;
    cout<<"enter x"<<endl;
    cin>>x;
    cout<<"enter y"<<endl;
    cin>>y;
    try
    {
        {
            ret=devision(x,y);
            cout<<"result : "<<ret<<endl;
        }
    }
    catch(const char *p)
    {
        cout<<p<<endl;
    }
    cout<<"hello"<<endl;
    cout<<"hai"<<endl;
}