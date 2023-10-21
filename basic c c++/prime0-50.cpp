#include <iostream>  
using namespace std;  
int main()  
{  
 int n =0 ;
 
 for( int i =2; i<=50; i++)
 {
 	
 	int count=0;
 	for(int j =1; j<=i; j++)
	 {
 		
 		if(i%j==0)
 		{
 			count++;
		 }
		 
	 }
	 if(count==2)
	 {
	   n++;
	   cout<<i<<endl;	
	 }

      }
	cout<<"Number of Prime Numbers are:"<<n<<endl;
}

    
 

