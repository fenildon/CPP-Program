//dma for 2d array
#include<iostream>
using namespace std;
int main()
{
int i,j,r,c,**p;
cout<<"enter row and col"<<endl;
cin>>r>>c;
p=new int*[r];
for(i=0;i<r;i++)
p[i]=new int[c];
cout<<"enter the dala"<<endl;
for(i=0;i<r;i++)
for(j=0;j<c;j++)
cin>>p[i][j];

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
cout<<p[i][j]<<" ";
cout<<endl;
}

for(i=0;i<r;i++)
delete []p[i];
delete []p;
//delete []p; if we use delete two time it will genrated run time error abort




}
