#include <iostream>
using namespace std;
int main()
{
int n,i;
cin>>n;
int a[n];
for(i=1;i<=n;i++)
{
    cin>>a[i];
    if(a[i]!=i)
    {
      cout<<i;
    }
}
return 0;
}
