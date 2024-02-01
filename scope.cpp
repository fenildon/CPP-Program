#include<iostream>
using namespace std;
struct B
{


};
class A
{


};
int main()
{
struct B b1;
cout << sizeof(b1) << endl;
cout << sizeof(class A) << endl;
}
