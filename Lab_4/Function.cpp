#include <iostream>
using namespace std;

int area(int);

int main(){
	int side;
	cout<<"Enter the side of Square: ";
	cin>>side;
	cout<<area(side);
	return 0;
}

int area(int a){
	a = a*a;
	cout<<"The area of Square is: ";
	return a;
}
