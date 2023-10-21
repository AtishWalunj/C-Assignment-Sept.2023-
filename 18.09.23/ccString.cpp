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
};

string1::~string1()
{
	cout<<"Destructor is called\n";
	if(ptr)
	delete[] ptr;
	ptr=NULL;
}
string1 :: string1(char* sptr)
{
	len = strlen(sptr);
	ptr = new char[len+1];
	strcpy(ptr,sptr);
}
void string1::show() 
{
   cout<<"length is :"<<len<<endl;
    cout<<"string is :"<<ptr<<endl;
}


int main()
{
	string1 c2("Rahul");
	c2.show();
	{
		string1 c3(c2);
		c3.show();
		c3.~string1();
	}
	c2.show();
}
