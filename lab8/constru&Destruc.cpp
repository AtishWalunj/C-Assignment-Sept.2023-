#include <iostream>  
  using namespace std;  

class Name 
{  
public:  
   
  Name () 
  {  
    cout<< "Constructor function is called" <<endl;  
  }  
    
  ~Name () 
  {  
    cout << "Destructor function is called" <<endl;  
   }  
    
   void display() 
   {  
     cout <<"Hello World!" <<endl;  
   }  
};  
int main(){  
  
   Name obj;   
   obj.display();  
   return 0;  
}
