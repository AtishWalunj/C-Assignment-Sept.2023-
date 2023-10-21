#include<iostream>
using namespace std;
class Emp
{
	int id;
	public:
		Emp();
		Emp(int);
		void display();
	    virtual int findsalary()=0;
};
Emp::Emp()
{
	cout<<"Default called of employee"<<endl;
	id=0;
}
Emp::Emp(int i)
{
	cout<<"para of emp called"<<endl;;
	id=i;
}
void Emp::display()
{
	cout<<"id is "<<id<<endl;
}
class Wagemp:public Emp
{
	int hrs,rate;
	public:
		Wagemp();
		Wagemp(int,int,int);
		void display();
		int findsalary();
};
Wagemp::Wagemp()
{
	cout<<"Default called of wageemp "<<endl;
	hrs=0;
	rate=0;
}
Wagemp::Wagemp(int i,int h,int r):Emp(i)
{
	cout<<"Para called of wage emp"<<endl;
	hrs=h;
	rate=r;
}
int Wagemp::findsalary()
{
	return hrs*rate;
}
void Wagemp::display()
{
	Emp::display();
	cout<<"Hours:"<<hrs<<"\t";
    cout<<"Rate: "<<rate<<endl;	
}
class Salesperson:public Wagemp
{
	int sales,comm;
	public:
	Salesperson();
	Salesperson(int,int,int,int,int);
	void display();
	int findsalary();
};
Salesperson::Salesperson()
{
	cout<<"Default of saleperson"<<endl;
	sales=0;
	comm=0;
}
Salesperson::Salesperson(int i,int h,int r,int s,int c):Wagemp(i,h,r)
{
	cout<<"Para of Salesperson"<<endl;
	sales=s;
	comm=c;
}
void Salesperson::display()
{
	Wagemp::display();
	cout<<"Sales="<<sales<<endl;
	cout<<"Commision="<<comm;
}
int Salesperson::findsalary()
{
	return (Wagemp::findsalary()+ sales*comm);
}
int main()
{
	int i=1,h=7,r=12,s=800,c=300;
	Emp*ptr= new Salesperson(1,7,12,800,300);
	cout<<"Id is "<<i<<endl;
	cout<<"Hours: "<<h<<" "<<"Rate: "<<r<<endl;
	cout<<"Sales are  "<<s<<endl;
	cout<<"Commision is "<<c<<endl;
	cout<<"Size of Employee="<<sizeof(ptr)<<endl;;
	ptr->findsalary();
	cout<<"Salary is "<<ptr->findsalary();
	
}

