#include<iostream>
using namespace std;
namespace SBI
{
int accno=1234;
void welcome();
}
namespace ICICI
{
int accno=5678;
void welcome();
}
void SBI::welcome()
{
cout<<"welcome in sbi"<<endl;
}
void ICICI::welcome()
{
cout<<"welcome in icici"<<endl;
}
int main()
{
using ICICI::accno;
using SBI::welcome;
cout<<accno<<endl;
welcome();
}





