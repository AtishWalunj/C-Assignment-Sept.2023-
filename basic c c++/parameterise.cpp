#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rno;
	char n[10];
	
	double fee;
	public:
	  student()
	  {
	  	cout<<"enter the details of student details\n";
	  	rno=10;
	  	strcpy(n,"rohan");
	  	fee=567.00;
	  
	 }	
	 student(int no,char *name,double q)
	 {
	 	rno=no;
	 	strcpy(n,name);
	 	
	 	fee=q;
	 }
	 void display()
	 {
	 	cout<<"the details are "<<rno<<n<<fee<<endl;
	 }
};
int main()
{
	student s1;
	s1.display();

	student s2(2,"atharva",4000.00);
	s2.display();
	return 0;
	
}

