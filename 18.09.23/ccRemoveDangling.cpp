#include<iostream>
using namespace std;
#include<string.h>


class string1{
	
	int len;
	char* ptr;
	public:
		string1(char*);
		void show();
		~string1();
		string1(string1 &);
		
};
string1::~string1()
{
	cout<<"destructor is called..."<<endl;
	if(ptr)
	delete[]ptr;
	ptr=NULL;
}
string1::string1(char* sptr)
{
	len = strlen(sptr);
	ptr = new char [len+1];
	strcpy(ptr,sptr);
}
void string1::show()
{
	cout<<"length is :"<<len<<endl;
	cout<<"string is :"<<ptr<<endl;
}
string1 :: string1(string1 &c)
{
	this->len = c.len;
	this->ptr = new char[this->len+1];
	strcpy(this->ptr,c.ptr);
}

int main(){
	
	string1 c2("Rahul");
	c2.show();
	{
		string1 c3(c2);
		c3.show();
		c3.~string1();
		
	}
	c2.show();
}
