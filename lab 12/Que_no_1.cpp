#include<iostream>
using namespace std;
#include<string.h>
class Employee
{
	protected:
		int id;
		char name[20];
	public:
		Employee()
		{
			id=0;
			strcpy(name,"\0");
		}
		void accecptdata()
		{
			cout<<"Enter Id = "<<endl;
			cin>>id;
			cout<<"Enter name = "<<endl;
			cin>>name;
		}
		void displaydata()
		{
			cout<<"Id = "<<id<<endl;
			cout<<"Name = "<<name<<endl;
		}
		virtual int findsalary()=0;
};
class Salesperson : public Employee
{
	protected:
		int sales;
		int rate;
	public:
		Salesperson()
		{
			sales=0;
			rate=0;
		}
		void acceptdata()
		{
			cout<<"Enter sales = "<<endl;
			cin>>sales;
			cout<<"Enter rate = "<<endl;
			cin>>rate;
		}
		void displaydata()
		{
			cout<<"sales = "<<sales<<endl;
			cout<<"rate = "<<rate<<endl;
		}
		int findsalary()
		{
			return sales*rate;
		}
};

int main()
{
		Salesperson s1;
  		Employee* ptr = new Salesperson s1;
  		ptr->accecptdata();
  		ptr->displaydata();
  		cout<<"Salary of Salesperson = "<<ptr->findsalary();

	return 0;
}
