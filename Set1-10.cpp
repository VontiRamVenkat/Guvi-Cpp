#include <iostream>
using namespace std;

int main() {
 
   int num;
   int count=0;
   
   cout<<"Enter a number \n";
   cin>>num;
   while(num > 0) 
   {
      num=num/10;
      count++;
  }
  cout<<"Number of digits in a number is"<<count;
 
  return 0;
}
