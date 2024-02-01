//in class  if one of member as pointer pointing to dynamically allocated memory
//in this case if defult copy constructor is called by compiler so in copy all contian of refrance object is copyed that's why both object pointer is pointing to same heap
//heap section memory in one object modification is affect to onother object
//it is draw back of shallow copy 
#include<iostream>
#include<cstring>
using namespace std;
class shallow
{
	char *name;
	public:
	shallow(){}//def constructor
	shallow(const char *s)//parameterized constructor
	{
		name=new char[strlen(s)+1];
		strcpy(name,s);
	}
	void get_string()
	{
		cout<<"string s="<<name<<endl;
	}
	void modify()
	{
		name[0]='S';
	}
};
int main()
{
	shallow s1("vector"),s2(s1);
	s1.get_string();
	s2.get_string();
	s1.modify();
	s1.get_string();
	s2.get_string();
}
