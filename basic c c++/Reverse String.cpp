#include<iostream>
using namespace std;

int ustrlen(char*);

int main()
{
	char s[10];
	char b[10];
	int y=0,x;
	char a[10];
	char* names[3]={"cdac","sept","2023"};
	int len;
	cout<<"\n accept a string :\n";
	cin>>a;
	len=ustrlen(a);
	//string length
	cout<<len<<endl;
	//string reverse
    cout<<"enter the string to copy:\n ";
	cin>>s;//ram
	x =ustrlen(s);
	
	for(int i=0;i<x;i++)
	{
		b[y]=s[i];
		
		y++;
	}
	b[y]='\0';
	cout<<"New copied Reverse String:"<<b;

	cout<<"array of Chararcter pointer:\n ";
	for(int i=0;i<=3;i++)
	{
		cout<<names[i]<<endl;
		
	}
	
	
	
	return 0;
}


 int ustrlen(char*b)
  {
  	int len=0;
  	while(*b!='\0')
  	{
  		len++;
  		b++;
	  }
	  return len;
  }
