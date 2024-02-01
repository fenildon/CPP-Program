#include<iostream>
using namespace std;
//int sum(int a,int b=20,int c=40);work
int sum(int,int,int);//make default as a right most otherwise compiler is confused at time of fun calling
int main()
{
cout<<sum(10,20,30)<<endl;
}
int sum(int a,int b,int c)//in defination we can't write int b=20 error
{
return a+b+c;
}
