#include<iostream>
using namespace std;
void sum(int);
void sum(int,int=0);
int main()
{
sum(1);//in this case error compiler unable to decided ,sum(1,2) 
}
void sum(int i)
{}
void sum(int i,int j)
{}

