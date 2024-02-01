#include<iostream>
using namespace std;
int main()
{
int *p=new int;//int *p=new int(4);//it is called as dma inalization
cout << "enter number"<<endl;
cin >> *p;//cin don't requried addreash for scaning 
cout << *p<<endl;
}
