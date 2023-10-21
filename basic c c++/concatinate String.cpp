//concatinate string without 'concat' function
#include<stdio.h>
void uconcat(char*,char*);
int main()
{
	char str[]="Hello";
	char ttr[]="World";
	uconcat(str,ttr);
	printf("New concatinated String is:%s",str);
	return 0;
}
void uconcat(char* p,char*q)
{
	while(*p!='\0')
		p++;
		while(*q!='\0')
		{
			*p=*q;
			q++;
			p++;
		}
		
	*p='\0';
}
