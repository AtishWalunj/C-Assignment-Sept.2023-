#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter the value of a and b:"<<endl;
	cin>>a>>b;
	
	if (a > b){
		cout<<"a is greater than b."<<endl;
	}
	else if (a < b){
		cout<<"b is greater than a."<<endl;
	}
	else 
		cout<<"They are equal."<<endl;
	return 0;
}
