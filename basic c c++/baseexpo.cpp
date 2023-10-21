#include<iostream>
using namespace std;

int main(){

int base, expo,power=1;
cout<<"Enter base:\n";
cin>>base;
cout<<"Enter Expo:"<<endl;
cin>>expo;
for(int i =1; i<=expo; i++){
	
	 power = power*base;
  }
  cout<<"power:"<<power<<endl;
}
