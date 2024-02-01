#include<iostream>
using namespace std;
int main()
{
try
{
int *p=new int[100000000000000000000000];
}
catch(...)
{
cout<<"memory is not available"<<endl;
}
}
