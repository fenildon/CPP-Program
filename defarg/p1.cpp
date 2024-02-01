#include<iostream>
using namespace std;
//int sum(int a,int b=20,int c=40);work
int sum(int,int=20,int=40);//work
int main()
{
cout<<sum(10)<<endl;
}
int sum(int a,int b,int c)//in defination we can't write int b=20 error
{
return a+b+c;
}
