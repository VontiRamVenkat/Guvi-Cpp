#include <iostream>

using namespace std;

int main()
{
  int n,b,sum=0;
  
    cin>>n;
    cin>>b;
   cout << " The natural numbers upto:";
     for(int i = 1; i <= n; i++){
       cout<<i;
    }
    for(int i = 1; i <= b; i++){
           sum +=i;
    }
    cout<<"\nSum:"<<sum;
   return 0;

}




