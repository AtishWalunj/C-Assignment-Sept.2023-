#include<iostream>
using namespace std;
class A {
	
	int a;
	int b;
	 
	public:
		A(int p, int q){
	 		a = p;
	 		b = q;
	 	}
	 
	
		void show(){
			cout<<"Value of a is: "<<a<<endl;
			cout<<"Value of b is: "<<b<<endl;
		}
	class B {
		private:
		int c;
		int d;
		public:
			B(int x, int y){
				c = x;
				d = y;
			}
			void display(){
//				cout<<"Value of a is: "<<a<<endl;
//				cout<<"Value of b is: "<<b<<endl;
				cout<<"Value of c is: "<<c<<endl;
				cout<<"Value of d is: "<<d<<endl;
			}
	};
};
int main()
{
	A :: B obj(10,20);
	obj.display();
	
	
	A aobj(30,40);
	aobj.show();
}
