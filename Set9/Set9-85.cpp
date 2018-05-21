#include <iostream>
using namespace std;
int main()
{
   char a[100],odd[100],even[100];
   int i,k=0,j=0;
   cin >> a;
   for(i=0;a[i]!='\0';i++)
   {
       if(i%2==0)
       {
           odd[j]=a[i];
           j++;
       }
       else
       {
        even[k]=a[i];
        k++;
       }
   }
   for(i=0;i<j;i++)
   {
       cout << odd[i];
   }
  cout <<"\n";
    for(i=0;i<k;i++)
   {
       cout << even[i];
   }
   return 0;
}
