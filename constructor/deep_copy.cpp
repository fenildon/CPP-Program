//in class  if one of member as pointer pointing to dynamically allocated memory
//in this case if defined copy constructor is called by compiler so in copy all contia//n of refrance object is copyed as per our defination that's why both object pointer //is not pointing to same heap
//heap section memory in one object modification is not affect to onother object
//it is overcome drawback of deep copy 
#include<iostream>
#include<cstring>
using namespace std;
class deep
{
	char *name;
	public:
	deep(){}//def constructor
	deep(const char *s)//parameterized constructor
	{
		name=new char[strlen(s)+1];
		strcpy(name,s);
	}
	deep(deep &temp)//define copy constructor
	{	
		name=new char[strlen(temp.name)+1];
		strcpy(name,temp.name);
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
	deep s1("vector"),s2(s1);
	s1.get_string();
	s2.get_string();
	s1.modify();
	s1.get_string();
	s2.get_string();
}
