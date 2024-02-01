//io formated flag
#include<iostream>
using namespace std;
int main()
{
int x;
cout << "enter the number" << endl;
cin >> x;
cout << showbase;// show base for oct =0777  ,for hex=0xffff;
cout << uppercase;
cout << showpos;//show postive sign
cout << "hexa = " << hex << x << endl;
cout << "octal= " << oct << x << endl;
cout << "dec= "<<dec<<x<<endl;
}
