#include<iostream>
using namespace std;
#include<string.h>

class student
{
	int rno;
	char name[50];
	double fee;
	public:
		student(int,char [],double);
		void display();
		student(student &t)
        {
	    rno=t.rno;
	    strcpy(name,t.name);
	    fee=t.fee;
	
}


};
void student::display()
{
	cout<<endl<<rno<<"\t"<<name<<"\t"<<fee<<endl;
}

student::student(int no,char n[],double f)
{
	rno=no;
	strcpy(name,n);
	fee=f;
}



int main()
{
	student s(1001,"Manjeet",10000);
	s.display();
	student manjeet(s);
	manjeet.display();
	}
