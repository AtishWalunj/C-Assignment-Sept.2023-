#include <iostream>
using namespace std;

int main(){
	
	int menu,q;
	cout<<"Enter your drink: "<<endl;
	cout<<"1. Tea : 10"<<endl;
	cout<<"2. Coffee :15 "<<endl;
	cout<<"3. Juice : 50"<<endl;
	cout<<"4. Coke : 40"<<endl;
	cout<<"5. Mocktail :100"<<endl;
	cin>>menu;
	
	switch(menu){
	
		case 1: cout<<"Enter your quantity"<<endl;
				cin>>q;
				cout<<"Please pay "<<q*10;
				break;
				
		case 2: cout<<"Enter your quantity"<<endl;
				cin>>q;
				cout<<"Please pay "<<q*15;
				break;
				
		case 3: cout<<"Enter your quantity"<<endl;
				cin>>q;
				cout<<"Please pay "<<q*50;
				break;
				
		case 4: cout<<"Enter your quantity"<<endl;
				cin>>q;
				cout<<"Please pay "<<q*40;
				break;
				
		case 5: cout<<"Enter your quantity"<<endl;
				cin>>q;
				cout<<"Please pay "<<q*100;
				break;
				
		default:cout<<"Please Select among the above listed items.."<<endl;
}
	return 0;
}
