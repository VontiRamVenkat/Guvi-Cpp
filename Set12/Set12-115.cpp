#include<iostream>
using namespace std;
int main()
{
int n,k,temp,min,j;
cin>>n>>k;
int a[n];
int i;
for(i=0;i<n;i++)
{
cin>>a[i];
}
min=a[0];
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
{
 if(a[i]>a[j])
 {
  temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
 if(i==k-1)
 {
  cout<<a[i];
}
}
return 0;
}
