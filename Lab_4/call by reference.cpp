#include <iostream>
using namespace std;

void swap(int,int);
void swap1(int*,int*);
void swap2(int&,int&);


int main(){
	
	//	find the square of a number
	//	int a; 
	//	cout<<"Enter the value of a"<<endl;
	//	cin>>a;
	//	cout<<"The area of square is: "<<a*a<<endl;

	//passs by value
	
	int a,b;
	cout<<"Enter a and b: ";
	cin>>a>>b;
	cout<<"Value of a and b before swapping : "<<a<<b<<endl;
	swap(a,b);
	cout<<"Value of a and b after swapping : "<<a<<b<<endl;
	
	int c,d;
	cout<<"Enter c and d: ";
	cin>>c>>d;
	cout<<"Value of c and d before swapping : "<<c<<d<<endl;
	swap1(&c, &d);
	cout<<"Value of c and d after swapping : "<<c<<d<<endl;
	
	int e,f;
	cout<<"Enter e and f: ";
	cin>>e>>f;
	cout<<"Value of e and f before swapping : "<<e<<f<<endl;
	swap2(e, f);
	cout<<"Value of e and f after swapping : "<<e<<f<<endl;
	return 0;
}

void swap(int p,int q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	cout<<"Value of p and q: "<<p<<q<<endl;
}

void swap1(int* m, int* n)
{
	int temp = *m;
	*m = *n;
	*n = temp;
	cout<<"After swapping Value of m and n: "<<*m<<*n<<endl;
}

void swap2(int& x,int& y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"Value of x and y: "<<x<<y<<endl;
}


