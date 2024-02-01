#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
*a=*a+*b-(*b=*a);
}
int main()
{
int i=10,j=20;
cout << "before i="<<i<<" j="<<j<<endl;
swap(&i,&j);
cout << "after i="<<i<<" j="<<j<<endl;
}
