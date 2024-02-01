//refrance to array possibe //array of refrance error
#include<iostream>
using namespace std;
int main()
{
int a[]={10,20,30,40,50};
int (&p)[5]=a;
//int &p[5]=a;error array of refranc
for(int i=0;i<5;i++)
cout << "a[" <<i<<"]="<<p[i]<<endl;
}
