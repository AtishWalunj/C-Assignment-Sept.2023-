#include<iostream>
using namespace std;
#include<string.h>

class student
{
	int rno;
	char n[10];
	
	double fee;
	public:
	 void accept()
	  {
	  	cout<<"enter the details of student details\n";
	  	cin>>rno>>n>>fee;
	  
	 }	
	   void show(int no,char *name,double q)
	 {
	 	rno=no;
	 	strcpy(n,name);
	 	
	 	fee=q;
	 }
     void display()const
	 {
	 	cout<<"the details are "<<rno<<n<<fee<<endl;
	 }
	 student()
	 {
	 	rno=1;
	 	strcpy(n,"ram");
	 	fee=345.00;
	 }
};
int main()
{
 const	student s1;
	
	s1.display();

	const student s2; 
	
	s2.display();
	return 0;
	
}

