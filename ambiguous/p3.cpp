#include<iostream>
using namespace std;
void sum(int);
void sum(int&);
int main()
{
int x=10;
sum(x);//conused compiler unable to decided x trated as refrance or constan su(10) work
}
void sum(int x)
{}
void sum(int &x)
{}

