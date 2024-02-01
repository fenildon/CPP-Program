#include<iostream>
using namespace std;
int main()
{
//wchar_t ch[]={2737,2791,2730,44,2733,2736,2799,2730,2799,2721};
//int ele=sizeof(ch)/sizeof(ch[0]);
//wchar_t ch='\0';
wchar_t ch[]={0x0AA4,0x0AA8,0x0ABF,0x0AB7,0x0ABE,'\0'};
int ele=sizeof(ch)/sizeof(ch[0]);
//cout<<ele<<endl;
setlocale(LC_ALL,"");
for(int i=0;i<ele;i++)
wcout<<ch[i];
wcout<<endl;
}
