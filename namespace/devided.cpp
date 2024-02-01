//same bloack we can split into n number of blaock but variable can't use again 
//in one namespace we can't write multiple varibale with same name other wise redefination error will genrated
#include<iostream>
using namespace std;
namespace first
{
int x=10;
int y=10;
}
namespace first
{
int z=10;//if we use here x it will genrated error
int a=20;
}
int main()
{
}
