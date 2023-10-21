#include<iostream>
using namespace std;
template <class T>
T sum(T c[])
{
	int sumf=0;
	int n = sizeof(c[5]);
	int i;
    for( i=0; i<5; i++)
     sumf = sumf+c[i];
	 cout<<"sumof arry is: "<<sumf; 
     return sumf;
}
int main(){
	int c[5]={2,4,5,6,7};
	sum(c);


}
