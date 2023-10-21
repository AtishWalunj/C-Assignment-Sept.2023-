#include <iostream>
using namespace std;

int main(){
	int m1, m2, m3, m4, m5;
	float avg;
	int sum;
	for (int i = 1; i <= 5; i++){
		cout<<"Enter marks: "<<endl;
		cin>>m1>>m2>>m3>>m4>>m5;
		sum = (m1 + m2 + m3 + m4 + m5);
		avg = (float)sum/5;
		cout<< "Avg marks: "<<avg<<endl;
	}
	
	return 0;
}
