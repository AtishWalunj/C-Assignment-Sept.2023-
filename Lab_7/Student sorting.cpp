#include <iostream>
using namespace std;

class Date
{
	int day,month,year;
	public:
		Date()
		{
			day=10;
			month=9;
			year=2023;
		}
		void get(){
			cout<<"Enter your DOB: "<<endl;
			cin>>day;
			cin>>month;
			cin>>year;
		}
		void set(){
			cout<<day<<"/"<<month<<"/"<<year;
		}
};

class Student{
	int rno;
	char name[50];
	Date d;
	
	public: 
		void getData(){
			cout<<"Enter Roll no. "<<endl;
			cin>>rno;
			cout<<"Enter name: "<<endl;
			cin>>name;
			d.get();
		}
		
		void setData(){
			cout<<rno<<"               "<<name<<"               ";
			d.set();
			cout<<endl;
		}
		
		int setRoll(){
			return rno;
		}
		
};

int main(){
//	int temp = 0;
	int n;
	cout<<"Enter no. of students: "<<endl;
	cin>>n;
	Student s[n];
	Student temp;
	
	for(int i = 0; i < n; i++){
		s[i].getData();
	}
	
	cout<<"Before Sorting: "<<endl;
	for(int i = 0; i < n; i++){
		
		s[i].setData();
	}
	
	cout<<"After Sorting: "<<endl;
	for(int i = 0; i<n; i++){
		for (int j = 0; j<n-i-1; j++){
			if(s[j].setRoll() > s[j + 1].setRoll()){
				temp = s[j] ;
				s[j] = s[j+1];
				s[j+1] = temp;
			}
		} 
	}
	
	for(int i = 0; i < n; i++){
			s[i].setData();	
	}
	
	return 0;
}
