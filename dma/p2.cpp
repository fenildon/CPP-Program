#include<iostream>
using namespace std;
int main()
{
int *p=new int[5];//inalized memory for array
cout<<"enter the data"<<endl;
for(int i=0;i<5;i++)
cin>>p[i];
for(int i=0;i<5;i++)
cout << p[i]<<endl;
delete []p;//don't put ele othere wise error //we only informing to compiler just
//deallocate memory for array


}
