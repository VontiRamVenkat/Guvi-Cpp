#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int a,d,n,i,nth;
 int sum=0;
 cin>>a;
 cin>>d;
 cin>>n;
 sum=(n*(2*a+(n-1)*d))/2;
 nth=a+(n-1)*d;
 for(i=a;i<=nth;i=i+d)
 {
  if(i!=nth)
  {
    cout<<sum;
    break;
  }
 }
return 0;
}
