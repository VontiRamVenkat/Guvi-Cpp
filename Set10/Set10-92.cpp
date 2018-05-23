#include <iostream>
using namespace std;
int main()
{
     int N,n[10],i,sum=0;
          cin>>N;
           for(i=1;i<=N;i++)
         cin>>n[i];
           for(i=1;i<=N;i++)
           sum+=n[i];
          cout<<sum;
	         return 0;
  
}
