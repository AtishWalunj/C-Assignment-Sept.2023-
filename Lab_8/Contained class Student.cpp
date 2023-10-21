#include <iostream>
#include <string.h>
using namespace std;

class Address{
	int pin;
	int houseNo;
	char city[20];
	char state[50];
	char area[100];
	
	public:
		
		Address(int h, char*a, char* c, char*s, int p){
			pin = p;
			houseNo = h;
			strcpy(city, c);
			strcpy(state, s);
			strcpy(area, a);
		}
		
		void display(){
			cout<<"Address of student is :"<<houseNo<<", "<<area<<", "<<city<<", "<<state<<"("<<pin<<")"<<endl;
		}
};

class Student{
	int id;
	char name[50];
	int marks[5];
	float avg;
	Address add;
	
	public:
		
//		Student(){
//			add = Address();
//		}
		
		Student(int i, char*n, int h, char*a, char* c, char*s, int p):add(h,a,c,s,p){
			id = i;
			strcpy(name, n);
		}
		
		void calAvg(){
			int sum;
			cout<<"Enter the marks: "<<endl;
			for(int i = 0; i<5; i++){
				cin>>marks[i];
				sum = sum + marks[i];
			}
			avg = (float)sum/5;
			cout<<"Average is: "<<avg<<endl;
		}
		
		void display(){
			cout<<"Id: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
			calAvg();
			add.display();
			
		}
};

int main(){
//	Address a(106, "B, 1st floor, hm society, hinjewadi phase 2", "Pune", "Maharastra", 411057);
//	a.display();

Student s(501, "Manjushree", 106, "B, 1st floor, hm society, hinjewadi phase 2", "Pune", "Maharastra", 411057);
s.display();
	return 0;
}
