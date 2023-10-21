#include <iostream>  
#include <fstream> 
 
using namespace std;  
int main () {  

  ofstream filestream("testout.txt");  
  
  if (filestream.is_open()){  
    filestream << "Welcome to IEt."<<endl;  
    filestream << "C++ Module."<<endl; 
	filestream << "Welcome to CDAC institute Sept batch 2023" << endl;
    filestream.close();  
  }  
  
  else 
  cout <<"File opening is fail.";  
  
  return 0;  
}  
