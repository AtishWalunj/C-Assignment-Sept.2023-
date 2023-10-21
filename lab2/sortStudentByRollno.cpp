#include<iostream>
using namespace std;
#include<string.h>

class date
{
	int dd, mm, yy;
	public:
		void get()
		{
			cout<<"Enter date\n";
			cin>>dd>>mm>>yy;
		}
		void put()
		{
			cout<<"Date is : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
class student 
{
	int rollno;
	char name[10];
	int marks[2];
	date d;
	int avg;
	int sum;
	
	public:
		
		void get()
		{
			cout<<"enter rollno\n";
			cin>>rollno;
			cout<<"enter student name\n";
			cin>>name;
			cout<<"Enter marks: \n";
			for(int i=0; i<2; i++){
				cin>>marks[i];
			sum = sum+marks[i];
			
			}
			avg = sum/5;
			d.get();
			
	}
			void put()
		{
			cout<<rollno<<"*********"<<name<<"*********"<<endl;
			for(int i=0; i<5; i++)
			{
				cout<<marks[i]<<endl;
			}
			cout<<"Average of Marks: "<<avg<<endl;
			d.put();
		}
		int getrollno()
		{
			return rollno;
		}
		char* getname()
		{
			return name;
		}
		void setrollno(int r)
		{
			rollno = r;
		}
		void setname(char* n)
		{
			strcpy(name, n);
		}
		
};
int main()
{
	student s[10], temp;
	
	int i, n, j;
	cout<<"enter value of n \n";
	cin>>n;
	for(i=0; i<n; i++)
	{
		s[i].get();
	}
	for(i=0; i<n; i++)
	{
		s[i].put();
	}
	cout<<"sort student Information \n";
	for(i=0; i<n; i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(s[j].getrollno()>s[j+1].getrollno())
			{
				 temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			//cout<<"hello\n";
			}
		}
			
	}
	for(i=0; i<n; i++)
	{
		s[i].put();
	}
	
	
}

