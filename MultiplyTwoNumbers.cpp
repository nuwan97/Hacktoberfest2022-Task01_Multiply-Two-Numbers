#include <iostream>  
using namespace std;  
int main()  
{  
   int i,fact=1,number;      
  cout<<"Enter Number: ";     
 cin>>number;       
  for(i=1;i<=number;i++){         
      fact=fact*i;         
  }  
  
  //display number
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;     
  return 0;    
}
