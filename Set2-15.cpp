#include <iostream>
using namespace std;
int main()
{
    int num,m,n;
    cout<<"Print Even Numbers in a given range m to n:\n";
    cin>>m;
    cin>>n;
for (num = m; num < n; num++)
{
               if (num % 2 == 0) 
                  cout<<num;
         } 
                return 0;
}
