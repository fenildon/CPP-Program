//refrance to pointer possibe//pointer to refrance not poosible
#include<iostream>
using namespace std;
int main()
{
int i=10,*p;
//int &rp=*p;//error
int* &rp=p;
cout << "rp="<<rp<<"*rp="<<*rp<<endl;
}
