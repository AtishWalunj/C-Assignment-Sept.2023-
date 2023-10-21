#include<iostream>
using namespace std;

#include<stdlib.h>
#include<string.h>


class string1
{
	
int len;
char* ptr;
public:
	string1(char*);	
	void show();
	string1(char,int);
	string1(int);
	string1();
};
string1::string1()
{
	cout<<"Enter the length :\n";
	cin>>len;
	char ptr1[len+1];
	this->len=len;
	ptr = new char [this->len+1];
	cout<<"Enter the string :\n";
	cin>>ptr1;
	strcpy(ptr,ptr1);
}
string1::string1(int len)
{
	this->len=len;
	ptr=new char[this->len+1];
	char ch[this->len+1];
	cout<<"Enter the string:\n";
	cin>>ch;
	strcpy(ptr,ch);
}
string1::string1(char ch, int len)
{
	int i ;
	this->len=len;
	ptr= new char(this->len+1);
	for(i=0;i<this->len;i++)
	{
		ptr[i]=ch;
		cout<<ptr[i];
	}
	ptr[i]='\0';
	cout<<endl;
	
}
void string1::show()
{
	cout<<"String is:"<<ptr<<endl;
	cout<<"Length is:"<<len<<endl;
}
string1::string1(char* ptr1 )
{
len=strlen(ptr1);
ptr=new char[len+1];
strcpy(this->ptr,ptr1);	
}

int main()
{
	string1 s1("CDAC"); 
	s1.show();
	string1 s2('*',50);
	string1 s3(5);
	s3.show();
	string1 s4;
	s4.show();
}
