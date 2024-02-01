#include"header.h"

int main()
{
array a1,a2(10,20,30,40,50);
//a1=a2;//a1.operator =(a2);
//a1=-a2;//a2.operator -();
/*
for(int i=0;i<5;i++)
cout<<a1[i]<<" ";//a1.operator[](i);
cout<<endl;
for(int i=0;i<5;i++)
cout<<a2[i]<<" ";//a2.operator[](i);
cout<<endl;
*/
//a1(10,20,30,40,50);//a1.operator()(10,20,30,40,50);
//a1=++a2;//a2.operator();
a1=a2++;//a2.operator(0);//it will pass 0 for indication it is postfix
a1.get_data();
a2.get_data();
}
