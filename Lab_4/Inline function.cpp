#include <iostream>
using namespace std;

inline void add(int a, int b){
	int c;
	c = a + b;
	cout<<"Addition is "<<c<<endl;
}

inline void sub(int a, int b){
	int c;
	c = a - b;
	cout<<"Subtraction is "<<c<<endl;
}
	
int main(){

	add(20, 40);
	sub(40, 10);
}
