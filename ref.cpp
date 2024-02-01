//1)for refrance varibale diffrent memory will not created
//2)refreance varible must be inalized time of decleatrion
//ex:int &y;//error

//3)int &v=0;//null refrance not possibe
//4)refrance varible derefrance automatically//internully work like pointer
//5)we not giving varibale to constant refrance// int i; const int &j=i;//error
//we not giving const to varibale refrance //const int i;int &j=i//error
 // int &v=100; //error   but const int &v=100//possible
//6) in it's lifetime onerefrance can't refer to another varible
//ex int x=10,y=20;
// int &a=x;int &a=y; //error redeclration of a
//7)one variable can have multiple refreance
//8) refrance to refrance not possibe // int &&y=x;//error
#include<iostream>
using namespace std;
int  main()
{
int a=10,b=20;
//int &&y=a;//error because &y is not fixed
//int &y=b;
//z=20;
//cout << "y= "<<y<<endl;
//cout << "z= "<<a<<endl;
const int &k=100;
cout << "k= "<<k<<endl;
cout << "&k= "<<&k<<endl;

}

