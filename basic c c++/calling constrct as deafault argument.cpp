#include<iostream>
using namespace std;
//complex(int r=2,int i=3);
class complex
{
	int real,img;
	public:
		
		complex()
		{
			
		}
		complex(int r,int i=10)
		{
			real=r;
			img=i;
			cout<<"complex no is"<<r<<"+"<<i<<endl;
		}
		
};
//complex c1( int r=2,int i=3);
int main()
{
	complex c1;
	complex c2(20);
	return 0;
}
