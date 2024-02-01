#include<iostream>
using namespace std;
class array
{
	int a[5];
	public:
	array()//def constructor
	{
		for(int i=0;i<5;i++)
			a[i]=0;
	}
	array(int m,int n,int o,int p,int q)//paramiterize constructor
	{
		a[0]=m,a[1]=n,a[2]=o,a[3]=p,a[4]=q;
	}
void get_data();
void operator =(array);
void operator ()(int,int,int,int,int);
int  operator [](int);
array operator ++(int);
array operator ++();
array operator -();
};
void array::get_data()
{
for(int i=0;i<5;i++)
cout<<a[i]<<" ";
cout<<endl;
}

void array::operator =(array obj2)
{
cout<<"operator = overloaded"<<endl;
for(int i=0;i<5;i++)
a[i]=obj2.a[i];
}

void array::operator ()(int x,int y,int z,int l,int m)
{
cout<<"operator () overloaded"<<endl;
a[0]=x,a[1]=y,a[2]=z,a[3]=l,a[4]=m;
}

int  array::operator [](int index)
{
//cout<<"operator [] overloaded"<<endl;
return a[index];
}

array array::operator ++(int x)
{
cout<<"operator post++ overloaded"<<endl;
array result;
for(int i=0;i<5;i++)
result.a[i]=a[i]++;
return result;
}

array array::operator ++()
{
cout<<"operator ++pre overloaded"<<endl;
for(int i=0;i<5;i++)
a[i]++;
return *this;
}

array array::operator -()
{
cout<<"operator - overloaded"<<endl;
array result;
for(int i=0;i<5;i++)
result.a[i]=-a[i];
return result;
}

