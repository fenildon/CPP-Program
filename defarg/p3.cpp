#include<iostream>
using namespace std;
int sum(int a,int b,int c=2000)//it is treated as prototype as well as fn defination
{
return a+b+c;
}

int main()
{
cout<<sum(10,20)<<endl;
}
