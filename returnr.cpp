#include<iostream>
using namespace std;
int&  test()//if we remove & here lineno 12 genrated lvalue required error
{
static int k=100;
cout << "k="<<k<<endl;
return k;
}
int main()
{
int a=10;
test()=a;
test();
}
